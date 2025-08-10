#include<stdio.h>
#include"hinh_hoc.h"
int main() {
	hinh_chu_nhat_c B;
	B.dai = 10;
	B.rong = 20;
	int x = B.tinh_dien_tich();
	printf("Gia tri cua x la:%d", x);
	return 0;
}