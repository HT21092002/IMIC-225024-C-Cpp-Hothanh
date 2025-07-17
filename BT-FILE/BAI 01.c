#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char ten[100];
    float toan, ly, hoa, dtb;
} HocSinh;

void hoanDoi(HocSinh* a, HocSinh* b) {
    HocSinh tmp = *a;
    *a = *b;
    *b = tmp;
}

void sapXepTheoDTB(HocSinh ds[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].dtb < ds[j].dtb)
                hoanDoi(&ds[i], &ds[j]);
}

void ghiFile(const char* tenFile, HocSinh ds[], int n) {
    FILE* f = fopen(tenFile, "w");
    if (!f) {
        printf("Khong the ghi file %s\n", tenFile);
        return;
    }

    fprintf(f, "Ten,Toan,Ly,Hoa,DTB\n");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s,%.2f,%.2f,%.2f,%.2f\n",
            ds[i].ten, ds[i].toan, ds[i].ly, ds[i].hoa, ds[i].dtb);
    }

    fclose(f);
}

int main() {
    FILE* fp = fopen("D:/BTC++/bai01/BT-FILE/x64/Debug/DanhSachHocSinh.csv", "r");
    if (fp == NULL) {
        printf("Khong the mo file DanhSachHocSinh.csv\n");
        return 1;
    }

    HocSinh ds[MAX];
    int n = 0;
    char line[256];
    char gioitinh[10]; // biến để bỏ qua cột giới tính

    fgets(line, sizeof(line), fp); // bỏ dòng tiêu đề

    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\r\n")] = 0;

        int matched = sscanf(line, "%[^,],%f,%[^,],%f,%f",
            ds[n].ten, &ds[n].toan, gioitinh, &ds[n].ly, &ds[n].hoa);

        if (matched == 5) {
            ds[n].dtb = (ds[n].toan + ds[n].ly + ds[n].hoa) / 3.0f;
            n++;
        }
        else {
            printf("Dong sai dinh dang: %s\n", line);
        }
    }

    fclose(fp);

    if (n == 0) {
        printf("Khong co du lieu hop le trong file.\n");
        return 1;
    }

    printf("\nDanh sach hoc sinh:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Toan: %.2f, Ly: %.2f, Hoa: %.2f, DTB: %.2f\n",
            ds[i].ten, ds[i].toan, ds[i].ly, ds[i].hoa, ds[i].dtb);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].dtb > ds[maxIndex].dtb)
            maxIndex = i;
    }

    printf("\nHoc sinh co DTB cao nhat: %s - %.2f\n",
        ds[maxIndex].ten, ds[maxIndex].dtb);

    sapXepTheoDTB(ds, n);

    printf("\nDanh sach sau sap xep giam dan theo DTB:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - DTB: %.2f\n", ds[i].ten, ds[i].dtb);
    }

    ghiFile("D:/BTC++/bai01/BT-FILE/x64/Debug/DanhSachSapXep.csv", ds, n);
    printf("\nDa ghi danh sach vao file DanhSachSapXep.csv\n");

    return 0;
}
