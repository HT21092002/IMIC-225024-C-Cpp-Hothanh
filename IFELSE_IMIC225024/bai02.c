//Bài 2: viết chương trình tìm max của 3 số a, b và c
//Giải thích : nhập vào 3 số nguyên a, b, c in ra số lớn nhất của 3 số này.
#include<stdio.h>
int tim_max_3so(int a, int b, int c) {
	int max = a;
	if (b > max) { max = b; }
	if (c > max) { max = c; }

	if (a == b && b == c) {
		max =a;
	}
	return max;
}
void main() {
	int a, b, c;
	char kytu;
	int max;
	do {
		// nhap so lieu
		printf("Nhap vao gia tri a:");
		scanf_s("%d", &a);
		printf("Nhap vao gia tri b:");
		scanf_s("%d", &b);
		printf("Nhap vao gia tri c:");
		scanf_s("%d", &c);
		//ham tim min max
		max = tim_max_3so(a, b,c);
		printf("MAX: %d\n",max);
		while ((getchar()) != '\n');  // Xóa ký tự Enter còn sót
		// Xóa bộ đệm trước khi nhập ký tự
		printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
		scanf_s("%c", &kytu, 1);

	} while (kytu == 'Y' || kytu == 'y');
	return 0;
}