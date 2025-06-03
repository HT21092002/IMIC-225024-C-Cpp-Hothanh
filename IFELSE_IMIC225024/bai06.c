//Bài 6: xếp loại học sinh dựa vào điểm trung bình
//Giải thích : nhập vào số thực từ bàn phím.in ra loại của học sinh này dựa vào điểm trung bình :
//Giỏi >= 8.0
//8.0 > Khá >= 6.5
//6.5 > Trung Bình >= 5.0
//5.0 < Yếu
#include <stdio.h>
void tinh_diem_trung_binh(float diemTB) {
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
}

int main() {
    float diemTB;
    char kytu;
    do {
        // Nhập điểm trung bình từ bàn phím
        do {
            printf("Nhap diem trung binh cua hoc sinh: ");
            scanf_s("%f", &diemTB);
        } while (diemTB > 10 || diemTB < 0);
        tinh_diem_trung_binh(diemTB);
        // Dọn bộ đệm trước khi nhập ký tự
        while ((getchar()) != '\n');  // Xóa kí tự Enter còn sót
        printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
        scanf_s("%c", &kytu, 1);

    } while (kytu == 'Y' || kytu == 'y');

    return 0;
}