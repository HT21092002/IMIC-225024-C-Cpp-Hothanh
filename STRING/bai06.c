 /*Bài 06: Xây dựng hàm.dùng để tìm ký tự c trong chuỗi str.hàm trả về địa chỉ của ký tự c trong chuỗi str*/
#include <stdio.h>

// Hàm tìm ký tự c trong chuỗi str
char* timKyTu(const char* str, char c) {
    while (*str != '\0') {
        if (*str == c) {
            return str; // Trả về địa chỉ của ký tự tìm thấy
        }
        str++;
    }
    return NULL; // Không tìm thấy
}

void main() {
    const char* chuoi = "Xin chao ban!";
    char kyTuCanTim = 'c';

    char* ketQua = timKyTu(chuoi, kyTuCanTim);

    if (ketQua != NULL) {
        printf("Tim thay ky tu '%c' tai dia chi: %p\n", kyTuCanTim, ketQua);
        printf("Ky tu tai dia chi do la: %c\n", *ketQua);
    }
    else {
        printf("Khong tim thay ky tu '%c' trong chuoi.\n", kyTuCanTim);
    }
}
