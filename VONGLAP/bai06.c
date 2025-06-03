//5. In ra các số nguyên tố nhỏ hơn n
//Đề bài : Nhập vào một số tự nhiên n bất kì, in ra màn hình các số nguyên tố nhỏ hơn n theo thứ tự tăng dần(sử dụng vòng lặp)
#include<stdio.h>
void in_ra_so_nho_hon_n(int n) {
	for (int i = 0; i < n; i++) {
		printf("%2d\n", i);
	}
}
void main() {
	int n;
	char kytu;
	do {
	printf("Nhap vao n:");
	scanf_s("%d", &n);
	in_ra_so_nho_hon_n(n);
	while ((getchar()) != '\n'); // Xóa kí tự Enter
	printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
	scanf_s("%c", &kytu, 1);
	} while (kytu == 'Y' || kytu == 'y');
	return 0;
}