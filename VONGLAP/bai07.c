//Viết chương trình tìm ước số chung lớn nhất của 2 số nguyên
//Đề bài : Nhập vào 2 số nguyên A, B.in ra màn hình ước số chung lớn nhất của A và B
#include<stdio.h>
int tim_UCLN(int a, int b) {
	int sodu;
	do {
	if (a > b) {
			sodu = a % b;
			a = b;
			b = sodu;
	}
	else if (b>a) {
		sodu = b % a;
		b = a;
		a = sodu;
    }
    else {
        return a;
    }
	}while (sodu != 0);
	return a;
}
void main() {
    int a, b;
    int ucln;
    char kytu;

    do {
        printf("Nhap vao gia tri a: ");
        scanf_s("%d", &a);
        printf("Nhap vao gia tri b: ");
        scanf_s("%d", &b);

        ucln = tim_UCLN(a, b);
        printf("UCLN: %d\n", ucln);

        printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
        getchar(); // Loại bỏ ký tự Enter còn trong bộ đệm
        scanf_s("%c", &kytu, 1);
    } while (kytu == 'Y' || kytu == 'y');
    return 0;
}