#include <stdio.h>

char* tim_chuoi_con(char* str, char* subStr) {
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; subStr[j] != '\0'; j++) {
            if (str[i + j] != subStr[j]) {
                break;  // không khớp, thoát vòng lặp j
            }
        }

        if (subStr[j] == '\0') {
            // j đi hết subStr nghĩa là khớp hoàn toàn
            return &str[i];
        }
    }

    return NULL; // không tìm thấy
}

int main() {
    char* str = "xin chao cac ban";
    char* subStr = "cac ban";

    char* ket_qua = tim_chuoi_con(str, subStr);

    if (ket_qua != NULL) {
        printf("Tim thay chuoi tai vi tri: %ld\n", ket_qua - str);
    }
    else {
        printf("Khong tim thay chuoi!\n");
    }

    return 0;
}