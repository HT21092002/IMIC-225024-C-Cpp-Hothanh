#include <stdio.h>
#include <stdlib.h>

struct phan_so {
    int tu_so;
    int mau_so;
};

int main() {
    struct phan_so A, B;

    // Nh?p ph�n s? A
    printf("Nhap phan so A:\n");
    printf("Tu so: ");
    scanf_s("%d", &A.tu_so);
    printf("Mau so: ");
    scanf_s("%d", &A.mau_so);

    // Nh?p ph�n s? B
    printf("Nhap phan so B:\n");
    printf("Tu so: ");
    scanf_s("%d", &B.tu_so);
    printf("Mau so: ");
    scanf_s("%d", &B.mau_so);

    // In ra k?t qu? ?� nh?p
    printf("Phan so A: %d/%d\n", A.tu_so, A.mau_so);
    printf("Phan so B: %d/%d\n", B.tu_so, B.mau_so);

    return 0;
}
