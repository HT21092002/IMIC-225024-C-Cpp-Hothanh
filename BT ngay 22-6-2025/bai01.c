#include <stdio.h>
#include <stdlib.h>  

int ham_tinh_tong_mang(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {  // 
        tong += a[i];
    }
    return tong;
}

int main() {  // 
    int n;
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

    int tong = ham_tinh_tong_mang(a, n);
    printf("Tong cac so trong mang la: %d\n", tong);

    free(a);  
    return 0;
}
