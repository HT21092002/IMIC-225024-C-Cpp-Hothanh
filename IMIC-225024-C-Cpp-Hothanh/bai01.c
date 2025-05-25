#include <stdio.h>

int main() {
    float diemTB;
    char kytu;
    do {
        // Nhập điểm trung bình từ bàn phím
        printf("Nhap diem trung binh cua hoc sinh: ");
        scanf_s("%f", &diemTB);

        // Xếp loại học sinh
        if (diemTB >= 8.0) {
            printf("Hoc sinh xep loai: Gioi\n");
        }
        else if (diemTB >= 6.5) {
            printf("Hoc sinh xep loai: Kha\n");
        }
        else if (diemTB >= 5.0) {
            printf("Hoc sinh xep loai: Trung Binh\n");
        }
        else {
            printf("Hoc sinh xep loai: Yeu\n");
        }

        // Dọn bộ đệm trước khi nhập ký tự
        while ((getchar()) != '\n');  // Xóa kí tự Enter còn sót

        printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
        scanf_s("%c", &kytu, 1);

    } while (kytu == 'Y' || kytu == 'y');

    return 0;
}