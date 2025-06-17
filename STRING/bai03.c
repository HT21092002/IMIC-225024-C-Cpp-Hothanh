//Bài 3: Xây dụng hàm, dùng để chuyễn chữ thường thành chư IN HOA
#include <stdio.h>
void chuyen_in_hoa(char* chuoi) {
    int i = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] >= 97 && chuoi[i] <= 122) {
            chuoi[i] = chuoi[i] - 32;
        }
        i++;
    }
}

void main() {
    char chuoi[] = "HoThanh";
    chuyen_in_hoa(chuoi);
    printf("Chuoi sau khi chuyen thanh IN HOA: %s\n", chuoi);
}
