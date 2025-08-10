#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void nhap_mang(int n, int *a) {
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i + 1);
		scanf("%d", a+i);
	}
}
void xuat_mang(int n, int* a) {
	for (int i = 0; i < n; i++) {
		printf("a[%d]:%d\n", i + 1,*(a+i));
	}
}
void xuat_file(int n, int* a, char tenFile[50]) {
	FILE* f;
	f=fopen(tenFile, "w");
	if (f == NULL) {
		printf("\nKhong mo dc file");
		return;
	}
	fprintf(f, "%d\n", n);
	for (int i = 0; i < n; i++) {
		fprintf(f, "%d\n", a[i]);
	}
	fclose(f);
}
void nhap_file(int n, int* a, char tenFile[50]) {
	FILE* f;
	f = fopen(tenFile, "r");
	if (f == NULL) {
		printf("\nKhong mo dc file");
		return;
	}
	fscanf(f, "%d\n", &n);
	for (int i = 0; i < n; i++) {
		fscanf(f, "%d\n", a+i);
		printf("%d\n", *(a + i));
	}
	fclose(f);
}
void main() {
	int n;
	printf("Nhap vao gia tri n:");
	scanf("%d", &n);
	int* a = (int*)malloc(n*sizeof(int));
	nhap_mang(n,a);
	xuat_mang(n, a);
	xuat_file(n, a, "Bai_xuat_mang.txt");
	nhap_file(n, a, "Bai_xuat_mang.txt");
}