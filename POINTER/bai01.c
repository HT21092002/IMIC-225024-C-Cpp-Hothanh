////Bài 1: Xây dụng hàm.dùng để điếm số ký tự trong chuỗi
#include<stdio.h>
int dem_so_luong_ki_tu(char* chuoi) {
	int dem = 0;
	while(chuoi[dem] != '\0') {
		dem++;
	}
	return dem;
}
void main() {
	int tong;
	char ten[20] = "Hothanh";
	tong=dem_so_luong_ki_tu(ten);
	printf("so luong ky tu:%d", tong);
}