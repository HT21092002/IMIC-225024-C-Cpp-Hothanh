//Bài 9: Xây dựng hàm.Sắp xếp mảng arr theo giá trị tăng dần
#include<stdio.h>
#include<stdlib.h>
void sap_xep_mang_tang_dan(int n, int a[]) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang sap xep tang dan la:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a[i]);
    }
}
void main() {
    int n = 0;
    int temp;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }
    printf("Mang vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d]: %d\n",i, a[i]);
    }
    sap_xep_mang_tang_dan(n, a);
    free(a);
        return 0;
}