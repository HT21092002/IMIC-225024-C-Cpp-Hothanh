#include <stdio.h>

void tim_min_max(int a, int b) {
	if (a > b) {
		printf("Max: %d, Min: %d\n", a, b);
	}
	else if (a == b) {
		printf("Hai so bang nhau, khong co gia tri Max/Min.\n");
	}
	else {
		printf("Max: %d, Min: %d\n", b, a);
	}
}

int main() {
	int a, b;
	char kytu;

	do {
		// Nhập dữ liệu
		printf("Nhap vao gia tri a: ");
		scanf_s("%d", &a);

		printf("Nhap vao gia tri b: ");
		scanf_s("%d", &b);

		// In kết quả
		printf("\n---------------------------\n");
		tim_min_max(a, b);
		printf("---------------------------\n");

		// Hỏi tiếp tục
		printf("Nhan Y/y de tiep tuc, phim khac de thoat: ");
		while ((getchar()) != '\n');  // Xóa Enter còn sót
		scanf_s("%c", &kytu, 1);

	} while (kytu == 'Y' || kytu == 'y');

	return 0;
}
