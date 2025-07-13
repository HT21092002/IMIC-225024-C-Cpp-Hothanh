#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    NAM = 0,
    NU = 1
} Sex;

typedef enum {
    GIOI = 0,
    KHA,
    TRUNGBINH,
    YEU
} Rank;

typedef struct {
    char* name;
    int age;
    Sex sex;
    float math;
    float literature;
    float medium;
    Rank rank;
} Student;

void import_list(Student* list, int n) {
    char buffer[100];
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin hoc sinh thu %d:\n", i + 1);

        printf("Ten: ");
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        list[i].name = strdup(buffer);

        printf("Tuoi: ");
        scanf_s("%d", &list[i].age);
        (void)getchar(); // Xóa newline

        int sex_input;
        do {
            printf("Gioi tinh (0 - Nam, 1 - Nu): ");
            scanf_s("%d", &sex_input);
            (void)getchar();
        } while (sex_input != 0 && sex_input != 1);
        list[i].sex = (Sex)sex_input;

        printf("Diem Toan: ");
        scanf_s("%f", &list[i].math);
        printf("Diem Van: ");
        scanf_s("%f", &list[i].literature);
        (void) getchar();

        list[i].medium = (list[i].math + list[i].literature) / 2.0f;

        if (list[i].medium >= 8.0f)
            list[i].rank = GIOI;
        else if (list[i].medium >= 6.5f)
            list[i].rank = KHA;
        else if (list[i].medium >= 5.0f)
            list[i].rank = TRUNGBINH;
        else
            list[i].rank = YEU;
    }
}

void min_max(Student* list, int n) {
    int vi_tri_max = 0;
    float maxmedium = list[0].medium;
    for (int i = 1; i < n; i++) {
        if (list[i].medium > maxmedium) {
            maxmedium = list[i].medium;
            vi_tri_max = i;
        }
    }
    printf("\nHoc sinh co diem trung binh cao nhat:\n");
    printf("Ten: %s\n", list[vi_tri_max].name);
    printf("Diem TB: %.2f\n", maxmedium);
}

void list_student(Student* list, int n) {
    printf("\n===== DANH SACH HOC SINH =====\n");
    for (int i = 0; i < n; i++) {
        printf("Hoc sinh %d:\n", i + 1);
        printf("Ten        : %s\n", list[i].name);
        printf("Tuoi       : %d\n", list[i].age);
        printf("Gioi tinh  : %d\n", list[i].sex);  // In ra 0 (NAM) hoặc 1 (NU)
        printf("Diem Toan  : %.2f\n", list[i].math);
        printf("Diem Van   : %.2f\n", list[i].literature);
        printf("Diem TB    : %.2f\n", list[i].medium);
        printf("Xep loai   : %d\n", list[i].rank); // In ra 0,1,2,3
        printf("-------------------------------\n");
    }
}

void arrange(Student* list, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (list[i].medium < list[j].medium) {
                Student temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    printf("\n===== SAP XEP DIEM =====\n");
    list_student(list, n);
}

int main() {
    int n;
    printf("Nhap vao so luong hoc sinh: ");
    scanf_s("%d", &n);
    (void)getchar(); // Xóa newline

    Student* list = (Student*)malloc(n * sizeof(Student));
    if (list == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    import_list(list, n);
    min_max(list, n);
    list_student(list, n);
    arrange(list, n);

    for (int i = 0; i < n; i++) {
        free(list[i].name);
    }
    free(list);
    return 0;
}
