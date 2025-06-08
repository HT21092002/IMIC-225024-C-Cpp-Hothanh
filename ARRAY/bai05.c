// 5: Xây dụng hàm.in ra các giá trị LẼ trong mảng arr
#include<stdio.h>
#include<stdlib.h>
void in_ra_cac_so_le_trong_mang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("a[%d]=%d\n", i, a[i]);
        }
    }
}
void main() {
    int n;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]", i);
        scanf_s("%d", &a[i]);
    }
    in_ra_cac_so_le_trong_mang(n, a);
    free(a);
    return 0;
}