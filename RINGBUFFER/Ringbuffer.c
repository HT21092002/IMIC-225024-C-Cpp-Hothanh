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

    // 1. N?u không còn slot tr?ng thì không th? ghi
    if (rb->empty_slots == 0)
        return -1;

    // 2. Ghi giá tr? vào vùng nh? mà write_ptr ?ang tr? ??n
    *(rb->write_ptr) = value;

    // 3. Di chuy?n write_ptr t?i ô k? ti?p
    rb->write_ptr++;

    // N?u write_ptr v??t ra ngoài buffer thì quay l?i ??u (vòng tròn)
    if (rb->write_ptr == rb->buffer + rb->capacity)
        rb->write_ptr = rb->buffer;

    // 4. Gi?m s? ô tr?ng
    rb->empty_slots--;

    return 0; // Put thành công
}
int GetItemFromRingBuffer(RingBuffer* rb, int* out_value) {
    if (rb == NULL || rb->buffer == NULL || out_value == NULL)
        return -1;

    // N?u t?t c? slot ?ang tr?ng ? buffer không có gì ?? ??c
    if (rb->empty_slots == rb->capacity)
        return -1;

    // ??c giá tr? t? v? trí mà read_ptr ?ang tr? t?i
    *out_value = *(rb->read_ptr);

    // Di chuy?n read_ptr t?i v? trí k? ti?p
    rb->read_ptr++;
    if (rb->read_ptr == rb->buffer + rb->capacity)
        rb->read_ptr = rb->buffer;

    // T?ng s? ô tr?ng lên
    rb->empty_slots++;

    return 0; // Get thành công
}
void DeleteRingBuffer(RingBuffer* rb) {
    if (rb == NULL)
        return;

    // Gi?i phóng vùng nh? buffer n?u có
    if (rb->buffer != NULL) {
        free(rb->buffer);
        rb->buffer = NULL;
    }

    // Reset các giá tr? v? m?c ??nh
    rb->capacity = 0;
    rb->empty_slots = 0;
    rb->write_ptr = NULL;
    rb->read_ptr = NULL;
}
