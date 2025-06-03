//2. Tính giai thừa của một số tự nhiên
//Cho một số tự nhiên n nhập từ bàn phím, viết chương trình in ra màn hình giai thừa của số vừa nhập có sử dụng vòng lặp.
#include<stdio.h>
int tinh_giai_thua(int n) {
	int giaithua = 1;
	for (int i = 1; i <= n; i++) {
		giaithua = giaithua * i;
	}
	return giaithua;
}
void main() {
	int n, tich;
	char kytu;
	do {
		do {
			printf("Nhap vao n: ");
			scanf_s("%d", &n);
		} while (n <= 0);
		tich = tinh_giai_thua(n);
		printf("%d!=%d\n", n, tich);
		while ((getchar()) != '\n'); // Xóa kí tự Enter
		printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
		scanf_s("%c", &kytu, 1);
	} while (kytu == 'Y' || kytu == 'y');

	return 0;
}