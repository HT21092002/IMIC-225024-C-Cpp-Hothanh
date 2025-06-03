//Bài 8: Tính thuế thu nhập cá nhân
//Giải thích : nhập vào lương, tính tiền thuế trên mức lương được nhập vào.

#include<stdio.h>
double tinh_tien_thue_thu_nhap_ca_nhan(double n) {
    double thue = 0;
    double thu_nhap_tinh_thue = n - 11000000; // Giảm trừ bản thân

    if (thu_nhap_tinh_thue <= 0) return 0;

    if (thu_nhap_tinh_thue <= 5000000)
        thue = thu_nhap_tinh_thue * 0.05;
    else if (thu_nhap_tinh_thue <= 10000000)
        thue = 5000000 * 0.05 + (thu_nhap_tinh_thue - 5000000) * 0.10;
    else if (thu_nhap_tinh_thue <= 18000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + (thu_nhap_tinh_thue - 10000000) * 0.15;
    else if (thu_nhap_tinh_thue <= 32000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + (thu_nhap_tinh_thue - 18000000) * 0.20;
    else if (thu_nhap_tinh_thue <= 52000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + 14000000 * 0.20 + (thu_nhap_tinh_thue - 32000000) * 0.25;
    else if (thu_nhap_tinh_thue <= 80000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + 14000000 * 0.20 + 20000000 * 0.25 + (thu_nhap_tinh_thue - 52000000) * 0.30;
    else
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + 14000000 * 0.20 + 20000000 * 0.25 + 28000000 * 0.30 + (thu_nhap_tinh_thue - 80000000) * 0.35;

    return thue;
}
void main() {
	double n, thue;
	char kytu;
	do {
		do {
			printf("Nhap vao tien luong cua ban: ");
			scanf_s("%lf", &n);
		} while (n <= 0);
		thue = tinh_tien_thue_thu_nhap_ca_nhan(n);
		printf("so tien thue phai tra la: %lf VND\n", thue);

		while ((getchar()) != '\n'); // Xóa kí tự Enter
		printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
		scanf_s("%c", &kytu, 1);
	} while (kytu == 'Y' || kytu == 'y');

	return 0;
}