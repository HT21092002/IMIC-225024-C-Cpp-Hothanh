#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct HocSinh {
    char ten[50];
    float diem_toan;
    float diem_van;
};

int main() {
    int n;
    printf("Nhap so luong hoc sinh: ");
    scanf_s("%d", &n);
    getchar();

    // Cấp phát động cho mảng học sinh
    struct HocSinh* ds = (struct HocSinh*)malloc(n * sizeof(struct HocSinh));
    if (ds == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    // Nhập danh sách học sinh
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin hoc sinh thu %d:\n", i + 1);
        fflush(stdin);  // Xóa bộ đệm trước khi nhập chuỗi
        printf("Ten: ");
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = '\0';  // Xóa ký tự '\n'

        printf("Diem Toan: ");
        scanf_s("%f", &ds[i].diem_toan);
        printf("Diem Van: ");
        scanf_s("%f", &ds[i].diem_van);
    }

    // Tìm học sinh có điểm trung bình cao nhất
    int vi_tri_max = 0;
    float max_tb = (ds[0].diem_toan + ds[0].diem_van) / 2;

    for (int i = 1; i < n; i++) {
        float tb = (ds[i].diem_toan + ds[i].diem_van) / 2;
        if (tb > max_tb) {
            max_tb = tb;
            vi_tri_max = i;
        }
    }

    // In kết quả
    printf("\nHoc sinh co diem trung binh cao nhat:\n");
    printf("Ten: %s\n", ds[vi_tri_max].ten);
    printf("Diem TB: %.2f\n", max_tb);

    // Giải phóng bộ nhớ
    free(ds);

    return 0;
}
