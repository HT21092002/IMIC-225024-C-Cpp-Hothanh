#include <stdio.h>
#include <stdlib.h>
#include "RingBuffer.h"

// 1. Hàm tạo
int CreateRingBuffer(RingBuffer* rb, int capacity) {
    rb->buffer = (int*)malloc(sizeof(int) * capacity);
    if (rb->buffer == NULL) {
        return -1; // cấp phát thất bại
    }
    rb->capacity = capacity;
    rb->head = 0;
    rb->tail = 0;
    rb->count = 0;
    return 0;
}

// 2. Put item vào RingBuffer
int PutItemToRingBuffer(RingBuffer* rb, int item) {
    if (rb->count == rb->capacity) {
        return -1; // Buffer đầy
    }
    rb->buffer[rb->head] = item;
    rb->head = (rb->head + 1) % rb->capacity;
    rb->count++;
    return 0;
}

// 3. Get item từ RingBuffer
int GetItemFromRingBuffer(RingBuffer* rb, int* item) {
    if (rb->count == 0) {
        return -1; // Buffer rỗng
    }
    *item = rb->buffer[rb->tail];
    rb->tail = (rb->tail + 1) % rb->capacity;
    rb->count--;
    return 0;
}

// 4. Hàm hủy
void DestroyRingBuffer(RingBuffer* rb) {
    if (rb->buffer != NULL) {
        free(rb->buffer);
        rb->buffer = NULL;
    }
    rb->capacity = 0;
    rb->head = rb->tail = rb->count = 0;
}
