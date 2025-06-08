//Bai 3: In ra cac vi tri cua so lon nhat trong mang
#include<stdio.h>
#include<stdlib.h>
void tim_vi_tri_lon_nhat_trong_mang(int n, int a[]) {
    int max=a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < a[i+1]) {
            max = a[i+1];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            printf("Vi tri chua gia tri lon nhat la: %d", i);
        }
    }
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
    tim_vi_tri_lon_nhat_trong_mang(n, a);
     free(a);
    return 0;
}