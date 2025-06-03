//tính tổng của n số nguyên đầu tiên,
//cho số tự nhiên n nhập từ bàn phím hãy viết chương trình in ra tổng của n số tự nhiên đầu tiên sử dụng vòng lặp
//Chỉ cộng số chẵn
#include<stdio.h>
int tinh_tong(int n) {
	int tong = 0;
	for (int i = 0; i <= n; i++) {
		tong = tong + i;
	}
	return tong;
}
int tinh_tong_so_chan (int n){
	int tong = 0;
for (int i = 0; i <= n; i+=2) {
	tong = tong + i;
}
return tong;
}
void main() {
	int n, tong;
	char kytu;
	do {
		do {
			printf("Nhap vao n: ");
			scanf_s("%d", &n);
		} while (n <= 0);
		tong = tinh_tong(n);
		printf("tong tu 0 den %d la %d\n", n,tong);
		tong = tinh_tong_so_chan(n);
		printf("tong chan tu 0 den %d la %d\n", n, tong);
		while ((getchar()) != '\n'); // Xóa kí tự Enter
		printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
		scanf_s("%c", &kytu, 1);
	} while (kytu == 'Y' || kytu == 'y');

	return 0;
}