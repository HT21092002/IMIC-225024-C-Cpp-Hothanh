//Bài 4: Kiểm tra số nhập vào số âm hay dương
//Giải thích : nhập vào số nguyên khác 0 từ bàn phím.kiểm tra số này là số âm hay dương(nhỏ hơn 0 hay lơn hơn 0)
#include<stdio.h>
void tim_so_am_hay_duong (int a){
	if (a > 0) {
		printf("%d la so nguyen duong\n",a);
	}
	else {
		printf("%d la so nguyen am\n",a);
	}
}
void main() {
	int a=0;
	char kytu;
	do {
		do {
			printf("Nhap vao a:");
			scanf_s("%d", &a);
		} while (a == 0);
		tim_so_am_hay_duong(a);
		while ((getchar()) != '\n');  // Xóa ký tự Enter còn sót
		// Xóa bộ đệm trước khi nhập ký tự
		printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
		scanf_s("%c", &kytu, 1);
	} while (kytu == 'Y' || kytu == 'y');
	return 0;
}
