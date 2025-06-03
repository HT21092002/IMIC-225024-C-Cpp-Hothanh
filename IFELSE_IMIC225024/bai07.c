//Bài 7: tính tiền điện dựa vào số KWh sử dụng
//Giải thích : nhập vào số nguyên số KWh sử dụng, dựa vào bản giá điện tính số tiền phải trả :
//Bậc 1 : Cho kWh từ 0 - 50  -- > 1.678 VND / 1KWh
//Bậc 2: Cho kWh từ 51 - 100 -- > 1.734 VND / 1KWh
//Bậc 3: Cho kWh từ 101 - 200 -- > 2.014 VND / 1KWh
//Bậc 4: Cho kWh từ 201 - 300 -- > 2.536 VND / 1KWh
//Bậc 5: Cho kWh từ 301 - 400 -- > 2.834 VND / 1KWh
//Bậc 6: Cho kWh từ 401 trở lên-- > 2.927 VND / 1KWh
#include<stdio.h>

int tinh_tien_dien(int n) {
	int tong = 0;

	if (n <= 50)
		tong = n * 1678;
	else if (n <= 100)
		tong = 50 * 1678 + (n - 50) * 1734;
	else if (n <= 200)
		tong = 50 * 1678 + 50 * 1734 + (n - 100) * 2014;
	else if (n <= 300)
		tong = 50 * 1678 + 50 * 1734 + 100 * 2014 + (n - 200) * 2536;
	else if (n <= 400)
		tong = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (n - 300) * 2834;
	else
		tong = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (n - 400) * 2927;

	return tong;
}
int tinh_tien_dien_nang_cap(int n) {
	int bac[] = { 50, 50, 100, 100, 100, n }; // số kWh mỗi bậc
	int gia[] = { 1678, 1734, 2014, 2536, 2834, 2927 }; // đơn giá mỗi bậc
	int tong = 0;

	for (int i = 0; i < 6 && n > 0; i++) {
		int dung_luong = (n > bac[i]) ? bac[i] : n;
		tong += dung_luong * gia[i];
		n -= dung_luong;
	}

	return tong;
}
int main() {
	int n, tong;
	char kytu;
	do {
		do {
			printf("Nhap vao so kWh ma ban su dung: ");
			scanf_s("%d", &n);
		} while (n <= 0);
		tong = tinh_tien_dien(n);
		printf("Gia dien ban phai tra la: %d VND\n", tong);

		while ((getchar()) != '\n'); // Xóa kí tự Enter
		printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
		scanf_s("%c", &kytu,1);
	} while (kytu == 'Y' || kytu == 'y');

	return 0;
}
