#include <stdio.h>
#include "RingBuffer.h"

int main() {
    RingBuffer rb;
    int ret, value;

    // Tạo buffer có 5 phần tử
    if (CreateRingBuffer(&rb, 5) != 0) {
        printf("Tao RingBuffer that bai!\n");
        return -1;
    }
    printf("Da tao RingBuffer dung luong = %d\n", rb.capacity);

    // Put dữ liệu
    for (int i = 1; i <= 5; i++) {
        ret = PutItemToRingBuffer(&rb, i * 10);
        if (ret == 0)
            printf("Put %d thanh cong\n", i * 10);
        else
            printf("Put %d that bai (Buffer day)\n", i * 10);
    }

    // Get dữ liệu
    for (int i = 0; i < 6; i++) {
        ret = GetItemFromRingBuffer(&rb, &value);
        if (ret == 0)
            printf("Get thanh cong: %d\n", value);
        else
            printf("Get that bai (Buffer rong)\n");
    }

    // Hủy buffer
    DestroyRingBuffer(&rb);
    printf("Da giai phong RingBuffer\n");

    return 0;
}
