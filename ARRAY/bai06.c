//Bài 6: Xây dụng hàm.in ra các giá trị là số nguyên tố trong mảng arr
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void in_ra_cac_so_nguyen_trong_mang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        int dem = 0;
        if (a[i] < 2) continue;

        for (int j = 2; j <= sqrt(a[i]); j++) {
            if (a[i] % j == 0) {
                dem++;
                break;
            }
        }

        if (dem == 0) {
            printf("a[%d] = %d\n", i, a[i]);
        }
    }
}
int main() {
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

    printf("Cac so nguyen to trong mang:\n");
    in_ra_cac_so_nguyen_trong_mang(n, a);
    free(a);
    return 0;
}
