//Bài 5: Xây dụng hàm.dùng để in hoa chữ cái đầu tiên của từ trong chuỗi str
//"nguyen van a" -> "Nguyen Van A"
#include <stdio.h>

// Hàm chuyển chữ cái đầu của mỗi từ sang in hoa
void in_hoa_chu_dau(char* str) {
    int i = 0;
    int la_dau_tu = 1; // Đánh dấu nếu là ký tự đầu từ

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            la_dau_tu = 1; // Gặp khoảng trắng, từ sau là từ mới
        }
        else if (la_dau_tu == 1 && str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32; // In hoa chữ cái đầu từ
            la_dau_tu = 0;
        }
        else {
            la_dau_tu = 0; // Không phải đầu từ nữa
        }
        i++;
    }
}

void main() {
    char chuoi[] = " nguyen van a";
    in_hoa_chu_dau(chuoi);
    printf("Chuoi sau khi in hoa chu cai dau moi tu: %s\n", chuoi);
}
