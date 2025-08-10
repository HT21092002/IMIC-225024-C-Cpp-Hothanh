#include"hinh_hoc.h"
#include<stdio.h>
int hinh_chu_nhat_c::tinh_dien_tich() {
	return dai * rong;
}
int hinh_chu_nhat_c::tinh_chu_vi() {
	return(dai + rong) * 2;
}
hinh_chu_nhat_c::hinh_chu_nhat_c() {
	printf("Ham tao duoc khoi chay\n");
	dai = 0;
	rong = 0;
}