////Bài 1: Xây dụng hàm.dùng để điếm số ký tự trong chuỗi
#include<stdio.h>
int dem_chuoi(char* chuoi) {
	int dem = 0;
	while (chuoi[dem] != '\0') {
		dem++; 
	}
	return dem;
}
void main(){
	int dem;
	char chuoi[] = "Hothanh";
	dem= dem_chuoi(chuoi);
	printf("So luong ki tu chuoi la: %d", dem);
	return 0;
}