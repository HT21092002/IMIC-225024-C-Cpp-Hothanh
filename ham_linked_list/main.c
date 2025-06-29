#include <stdio.h>
#include "link_List.h"
void main() {
    linked_list_t myList;

    // Bài 1: Create
    Create(&myList);
    printf("Linked list da tao.\n");

    // Bài 2: GetLen (sau khi tạo, chưa có node nào)
    printf("So phan tu ban dau: %d\n", GetLen(&myList));

    // Bài 3: Add
    Add(&myList, 10);
    Add(&myList, 20);
    Add(&myList, 30);

    printf("Da thêm 3 node vào danh sach.\n");
    printf("so phan tu hien tai: %d\n", GetLen(&myList));
    // Bài 09
    printf("Gia tri o vi tri index 0: %d\n", GetValueIndex(&myList, 0)); // 10
    printf("Gia tri o vi tri index 1: %d\n", GetValueIndex(&myList, 1)); // 20
    printf("Gia tri o vi tri index 2: %d\n", GetValueIndex(&myList, 2)); // 30
    printf("Thu index sai (-1): %d\n", GetValueIndex(&myList, -1));      // Lỗi
    printf("Thu index qua gioi han: %d\n", GetValueIndex(&myList, 10));  // Lỗi
}
