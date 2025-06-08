//Bai 4: Thay the cac so am trong mang bang 0
#include<stdio.h>
#include<stdlib.h>
void thay_the_cac_so_am(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] <0 ) {
            a[i] = 0;
        }
    }
}
void main() {
    int n ;
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
    thay_the_cac_so_am(n, a);
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i,a[i]);
    }
    free(a);
    return 0;
}