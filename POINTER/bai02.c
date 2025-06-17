////Bài 2: Xây dựng hàm.dùng để điếm có bao nhiêu ký tự space(dấu cách) trong chuỗi
#include<stdio.h>
// Hàm đếm số ký tự space trong chuỗi
int dem_so_space(const char* chuoi) {
    int dem = 0;
    int i = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] == ' ') {
            dem++;
        }
        i++;
    }
    return dem;
}

void main() {
    char chuoi[] = "HOTHANH";
    int so_space = dem_so_space(chuoi);
    printf("So ky tu space trong chuoi la: %d\n", so_space);
    return 0;
}

void main() {
	int tong;
	char ten[20] = "Ho thanh";
	tong = dem_ki_tu_space(ten);
	printf("so luong ky tu space:%d", tong);
}