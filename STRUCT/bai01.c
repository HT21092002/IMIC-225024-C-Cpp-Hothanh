#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data {
    char name[30];
    int age;
    char sex[10];
    float math;
    float literature;
    float medium;
    char rank[10];
};
void import_list(struct data*list,int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin hoc sinh thu %d:\n", i + 1);

        printf("Ten: ");
        fgets(list[i].name, sizeof(list[i].name), stdin);
        list[i].name[strcspn(list[i].name, "\n")] = '\0';

        printf("Tuoi: ");
        scanf_s("%d", &list[i].age);
        (void)getchar();

        printf("Gioi tinh: ");
        fgets(list[i].sex, sizeof(list[i].sex), stdin);
        list[i].sex[strcspn(list[i].sex, "\n")] = '\0';

        printf("Diem Toan: ");
        scanf_s("%f", &list[i].math);

        printf("Diem Van: ");
        scanf_s("%f", &list[i].literature);
        (void)getchar();

        list[i].medium = (list[i].math + list[i].literature) / 2;

        if (list[i].medium >= 8.0) {
            strcpy_s(list[i].rank, sizeof(list[i].rank), "Gioi");
        }
        else if (list[i].medium >= 6.5) {
            strcpy_s(list[i].rank, sizeof(list[i].rank), "Kha");
        }
        else {
            strcpy_s(list[i].rank, sizeof(list[i].rank), "Yeu");
        }
    }
}
void min_max(struct data* list, int n) {
    int vi_tri_max = 0;
    float maxmedium = (list[0].math + list[0].literature) / 2;
    for (int i = 0; i < n; i++) {
        if (list[i].medium > maxmedium) {
            maxmedium = list[i].medium;
            vi_tri_max = i;
        }
    }
    printf("\nHoc sinh co diem trung binh cao nhat:\n");
    printf("Ten: %s\n", list[vi_tri_max].name);
    printf("Diem TB: %.2f\n", maxmedium);
}
void list_student(struct data* list, int n) {
    printf("\n===== DANH SACH HOC SINH =====\n");
    for (int i = 0; i < n; i++) {
        printf("Hoc sinh %d:\n", i + 1);
        printf("Ten        : %s\n", list[i].name);
        printf("Tuoi       : %d\n", list[i].age);
        printf("Gioi tinh  : %s\n", list[i].sex);
        printf("Diem Toan  : %.2f\n", list[i].math);
        printf("Diem Van   : %.2f\n", list[i].literature);
        printf("Diem TB    : %.2f\n", list[i].medium);
        printf("Xep loai   : %s\n", list[i].rank);
        printf("-------------------------------\n");
    }
}
void arrange(struct data* list, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (list[i].medium < list[j].medium) {
                struct data temp = list[j];
                list[j] = list[i];
                list[i] = temp;
            }
        }
    }
    printf("\n===== SAP XEP DIEM =====\n");
    for (int i = 0; i < n; i++) {
        printf("Hoc sinh %d:\n", i + 1);
        printf("Ten        : %s\n", list[i].name);
        printf("Tuoi       : %d\n", list[i].age);
        printf("Gioi tinh  : %s\n", list[i].sex);
        printf("Diem Toan  : %.2f\n", list[i].math);
        printf("Diem Van   : %.2f\n", list[i].literature);
        printf("Diem TB    : %.2f\n", list[i].medium);
        printf("Xep loai   : %s\n", list[i].rank);
        printf("-------------------------------\n");
    }
}
void main() {
    int n = 0;
    printf("Nhap vao so luong hoc sinh: ");
    scanf_s("%d", &n);
    (void)getchar();  // Xóa ký tự '\n' còn lại sau scanf
    struct data* list = (struct data*)malloc(n * sizeof(struct data));
    if (list == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    import_list(list, n);
    // tìm min max
    min_max(list, n);
    // In danh sach hoc sinh
    list_student(list, n);
    //Sắp xếp tăng dần
    arrange(list, n);
        free(list);
        return 0;
}
