#include<stdio.h>
struct hinh_chu_nhat_s {
	int dai;
	int rong;
};
class hinh_chu_nhat_c {
public:
	int dai;
	int rong;
	int tinh_dien_tich() {
		return dai * rong;
	}
};
int main() {
	hinh_chu_nhat_s A;
	A.dai = 20;
	A.rong = 30;
	hinh_chu_nhat_c B;
	B.dai = 10;
	B.rong = 20;
	int x = B.tinh_dien_tich();
	return 0;
}