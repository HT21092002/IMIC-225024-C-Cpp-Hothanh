#include <stdio.h>
int tinh_tong(int n) {
    int tong = 0;
    for (int i = 0; i <= n; i++) {
        tong = tong + i;
    }
    return tong;
}
    int main() {
        int n;
        int tong;
        char kytu;
        do{
            // Nhập điểm trung bình từ bàn phím
                printf("Nhap vao n: ");
                scanf_s("%d", &n);
                tong = tinh_tong(n);
                printf("Tong tu 0 den %d la %d", n, tong);
            // Dọn bộ đệm trước khi nhập ký tự
            while ((getchar()) != '\n');  // Xóa kí tự Enter còn sót
            printf("\nNhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
            scanf_s("%c", &kytu, 1);
        } while (kytu == 'Y' || kytu == 'y');

        return 0;
    }