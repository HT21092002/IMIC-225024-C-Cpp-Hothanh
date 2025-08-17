#include <stdio.h>
#include <stdlib.h>  
#include<math.h>
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void nhap_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("nhap vao a[%d]", i);
		scanf_s("%d", &a[i]);
	}
}
void sap_xep_mang_tang_dan(int a[],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(&a[i], &a[j]);
			}
		}
	}
}
void in_mang(int a[],int n) {
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}
void main() {
	int a[100];
	int n;
	printf("Nhap vao so luong phan tu:");
	scanf_s("%d", &n);
	nhap_mang(a, n);
	sap_xep_mang_tang_dan(a,n);
	printf("Mang tang dan:\n");
	in_mang(a,n);
}
