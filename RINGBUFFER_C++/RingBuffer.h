#ifndef RINGBUFFER_H
#define RINGBUFFER_H

typedef struct {
    int* buffer;        // Vùng nhớ lưu dữ liệu
    int capacity;       // Số lượng phần tử tối đa
    int head;           // Con trỏ ghi
    int tail;           // Con trỏ đọc
    int count;          // Số lượng phần tử hiện có
} RingBuffer;

int CreateRingBuffer(RingBuffer* rb, int capacity);
int PutItemToRingBuffer(RingBuffer* rb, int item);
int GetItemFromRingBuffer(RingBuffer* rb, int* item);
void DestroyRingBuffer(RingBuffer* rb);

#endif
