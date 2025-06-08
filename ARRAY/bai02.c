//Bai 2: tinh trung binh cong cac so le trong mang
#include<stdio.h>
#include<stdlib.h>
int ham_tinh_tong_so_le(int n,int a[]) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tong += a[i];
        }
    }
    return tong;
}
void main() {
	int n;
    int tong = 0;
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
    tong = ham_tinh_tong_so_le(n,a);
    printf("Tong cac so le trong mang: %d", tong);
    free(a);
	return 0;
}