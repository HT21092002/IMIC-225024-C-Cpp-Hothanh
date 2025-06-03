//Viết chương trình mô phỏng việc trả tiền của máy ATM.
//số tiền nhập vào phải là bội số của 50000. số tiền phải trả về đầy đủ các mệnh giá từ 50000 đến 500000
//In ra số lượng tờ tiền được rút.
//VD: người dùng nhập vào 1000000.
//In ra :
//2 x 50000
//2 x 100000
//1 x 200000
//1 x 500000
#include <stdio.h>

int main() {
    int soTien;
    printf("Nhap so tien muon rut (boi so cua 50000): ");
    scanf_s("%d", &soTien);

    if (soTien % 50000 != 0 || soTien <= 0) {
        printf("So tien khong hop le. Vui long nhap boi so cua 50000.\n");
        return 1;
    }

    int menhGia = 500000; // Bắt đầu từ mệnh giá lớn nhất

    while (menhGia >= 50000) {
        int soTo = soTien / menhGia;
        if (soTo > 0) {
            printf("%d x %d\n", soTo, menhGia);
            soTien %= menhGia;
        }

        // Giảm mệnh giá xuống lần lượt theo thứ tự thủ công
        if (menhGia == 500000) menhGia = 200000;
        else if (menhGia == 200000) menhGia = 100000;
        else if (menhGia == 100000) menhGia = 50000;
        else break; // Đã đến mệnh giá cuối
    }

    return 0;
}