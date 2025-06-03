#include<stdio.h>
void ktra_so_chan_le(int a) {
	if (a % 2 == 0) {
		printf("SO CHAN\n");
	}
	else {
		printf("SO LE\n");
	}
}
void main() {
	int n;
	char kytu;
	do {
		printf("Nhap vao gia tri:");
		scanf_s("%d", &n);
		ktra_so_chan_le(n);
		while ((getchar()) != '\n');
		printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
		scanf_s("%c", &kytu, 1);
	} while (kytu == 'Y' || kytu == 'y');
	return 0;
}