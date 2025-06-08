////Bài 1: Xây dựng hàm.tính tổng các giá trị trong mảng arr
#include<stdio.h>
int ham_tinh_tong_mang(int a[]) {
	int tong = 0;
	for (int i = 0; i <= 9; i++) {
		tong += a[i];
	}
	return tong;
}
void main() {
	int arr[10];
	int tong = 0;
	for (int i = 0; i <= 9; i++) {
		printf("Nhap a[%d]", i);
		scanf_s("%d", &arr[i]);
	}
	tong = ham_tinh_tong_mang(arr);
	printf("Tong 10 phan tu trong mang la: %d", tong);
}