//3. Nhập số vào màn hình cho đến khi nhập số 0 thì dừng
//Đề bài : Nhập vào một số cho đến khi ta nhập số 0 thì dừng chương trình.
//3.1 : neu nhap sai qua 5 thi thoat chuong trinh
#include <stdio.h>
int main() {
	int n;
	int dem = 0;

	do {
		printf("Nhap vao gia tri (0 de thoat): ");
		scanf_s("%d", &n);
		if (n != 0) {
			dem++;
		}
		if (dem >= 5) {
			printf("Ban da nhap sai qua 5 lan. Thoat chuong trinh.\n");
			break;
		}
	} while (n != 0);

	return 0;
}