#include <stdlib.h>
#include "Ringbuffer.h"

void CreateRingBuffer(RingBuffer* rb, int capacity) {
    if (rb == NULL || capacity <= 0)
        return;
    rb->buffer = (int*)malloc(sizeof(int) * capacity);
    if (rb->buffer == NULL)
        return;
    rb->capacity = capacity;
    rb->empty_slots = capacity;
    rb->write_ptr = rb->buffer;
    rb->read_ptr = rb->buffer;
}
int PutItemToRingBuffer(RingBuffer* rb, int value) {
    if (rb == NULL || rb->buffer == NULL)
        return -1;

    // 1. N?u kh�ng c�n slot tr?ng th� kh�ng th? ghi
    if (rb->empty_slots == 0)
        return -1;

    // 2. Ghi gi� tr? v�o v�ng nh? m� write_ptr ?ang tr? ??n
    *(rb->write_ptr) = value;

    // 3. Di chuy?n write_ptr t?i � k? ti?p
    rb->write_ptr++;

    // N?u write_ptr v??t ra ngo�i buffer th� quay l?i ??u (v�ng tr�n)
    if (rb->write_ptr == rb->buffer + rb->capacity)
        rb->write_ptr = rb->buffer;

    // 4. Gi?m s? � tr?ng
    rb->empty_slots--;

    return 0; // Put th�nh c�ng
}
int GetItemFromRingBuffer(RingBuffer* rb, int* out_value) {
    if (rb == NULL || rb->buffer == NULL || out_value == NULL)
        return -1;

    // N?u t?t c? slot ?ang tr?ng ? buffer kh�ng c� g� ?? ??c
    if (rb->empty_slots == rb->capacity)
        return -1;

    // ??c gi� tr? t? v? tr� m� read_ptr ?ang tr? t?i
    *out_value = *(rb->read_ptr);

    // Di chuy?n read_ptr t?i v? tr� k? ti?p
    rb->read_ptr++;
    if (rb->read_ptr == rb->buffer + rb->capacity)
        rb->read_ptr = rb->buffer;

    // T?ng s? � tr?ng l�n
    rb->empty_slots++;

    return 0; // Get th�nh c�ng
}
void DeleteRingBuffer(RingBuffer* rb) {
    if (rb == NULL)
        return;

    // Gi?i ph�ng v�ng nh? buffer n?u c�
    if (rb->buffer != NULL) {
        free(rb->buffer);
        rb->buffer = NULL;
    }

    // Reset c�c gi� tr? v? m?c ??nh
    rb->capacity = 0;
    rb->empty_slots = 0;
    rb->write_ptr = NULL;
    rb->read_ptr = NULL;
}
