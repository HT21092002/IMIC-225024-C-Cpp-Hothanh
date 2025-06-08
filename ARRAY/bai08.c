//Bai 8: Viet Ham Hoan Vi 2 so nguyen
#include<stdio.h>
void hoan_vi(int a[]) {
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}
void main() {
	int a[2];
	printf("Nhap vao gia tri 1: ");
	scanf_s("%d", &a[0]);
	printf("Nhap vao gia tri 2: ");
	scanf_s("%d", &a[1]);
	printf("Truoc khi hoan vi a[0]=%d , a[1]=%d\n", a[0], a[1]);
	hoan_vi(a);
	printf("sau khi hoan vi a[0]=%d , a[1]=%d", a[0], a[1]);
	return 0;
}