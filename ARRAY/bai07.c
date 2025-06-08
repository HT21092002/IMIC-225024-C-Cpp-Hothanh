//Bài 7: Xây d?ng hàm.in ra giá tr? l?n nh?t trong m?ng arr
#include<stdio.h>
#include<stdlib.h>
void so_lon_nhat_trong_mang(int n, int a[]) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < a[i + 1]) {
            max = a[i + 1];
        }
    }
    printf("MAX=%d", max);
}
void main() {
    int n = 0;
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
    so_lon_nhat_trong_mang(n, a);
    free(a);
    return 0;
}