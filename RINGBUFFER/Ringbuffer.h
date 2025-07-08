#pragma once
#ifndef RINGBUFFER_H
#define RINGBUFFER_H

typedef struct {
    int* buffer;        // vùng nhớ chứa dữ liệu
    int capacity;       // số lượng phần tử tối đa
    int empty_slots;          // số lượng ô trống
    int * write_ptr;    // chỉ số sẽ ghi tiếp theo
    int * read_ptr;     // chỉ số sẽ đọc tiếp theo
} RingBuffer;

// Tạo RingBuffer
void CreateRingBuffer(RingBuffer* rb, int capacity);

// Ghi giá trị vào RingBuffer
int PutItemToRingBuffer(RingBuffer* rb, int item);

// Đọc giá trị ra khỏi RingBuffer
int GetItemFromRingBuffer(RingBuffer* rb, int* out_value);

// Xóa RingBuffer
void DeleteRingBuffer(RingBuffer* rb);

#endif // RINGBUFFER_H