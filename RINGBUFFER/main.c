#include <stdio.h>
#include "RingBuffer.h"

int main() {
    RingBuffer rb;

    CreateRingBuffer(&rb, 5);
    //bai 01
    if (rb.buffer != NULL) {
        printf("RingBuffer created successfully!\n");
        printf("Capacity: %d\n", rb.capacity);
        printf("Empty slots: %d\n", rb.empty_slots);
        printf("Write ptr: %p\n", (void*)rb.write_ptr);
        printf("Read  ptr: %p\n", (void*)rb.read_ptr);
    }
    else {
        printf("Failed to create RingBuffer.\n");
    }
    //bai 02
    int values[] = { 10, 20, 30 };
    for (int i = 0; i < 3; i++) {
        printf("-- PutItemToRingBuffer(%d) --\n", values[i]);
        int result = PutItemToRingBuffer(&rb, values[i]);
        if (result == 0) {
            printf("Put %d thanh cong.\n", values[i]);
        }
        else {
            printf("Put %d taht bai (buffer đay).\n", values[i]);
        }
        printf("Empty slots: %d\n", rb.empty_slots);
        printf("Write ptr: %p\n", (void*)rb.write_ptr);
        printf("Buffer state: ");
        for (int j = 0; j < rb.capacity; j++) {
            printf("%d ", rb.buffer[j]);
        }
        printf("\n\n");
    }
    // 3. Đọc giá trị ra khỏi buffer
    int out_val;
    for (int i = 0; i < 3; i++) {
        printf("-- GetItemFromRingBuffer() --\n");
        int result = GetItemFromRingBuffer(&rb, &out_val);
        if (result == 0) {
            printf("Get thành công: %d\n", out_val);
        }
        else {
            printf("Get thất bại (buffer rỗng).\n");
        }
        printf("Empty slots: %d\n", rb.empty_slots);
        printf("Read ptr: %p\n", (void*)rb.read_ptr);
        printf("\n");
    }
    // 4. Xoá buffer sau khi test
    DeleteRingBuffer(&rb);

    // Kiểm tra sau khi xoá
    printf("== After DeleteRingBuffer ==\n");
    printf("Buffer: %p\n", (void*)rb.buffer);
    printf("Write ptr: %p\n", (void*)rb.write_ptr);
    printf("Read  ptr: %p\n", (void*)rb.read_ptr);
    printf("Capacity: %d\n", rb.capacity);
    printf("Empty slots: %d\n", rb.empty_slots);
    free(rb.buffer);

    return 0;
}
