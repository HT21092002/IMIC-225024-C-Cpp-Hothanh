#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;
    char kytu;

    do {
        printf("Nhap a: ");
        scanf_s("%f", &a);
        printf("Nhap b: ");
        scanf_s("%f", &b);
        printf("Nhap c: ");
        scanf_s("%f", &c);

        if (a == 0) {
            // Phương trình bậc nhất: bx + c = 0
            if (b == 0) {
                if (c == 0) {
                    printf("Phuong trinh vo so nghiem.\n");
                }
                else {
                    printf("Phuong trinh vo nghiem.\n");
                }
            }
            else {
                x1 = -c / b;
                printf("Phuong trinh bac nhat, nghiem x = %.2f\n", x1);
            }
        }
        else {
            // Phương trình bậc hai: ax^2 + bx + c = 0
            delta = b * b - 4 * a * c;

            if (delta > 0) {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Phuong trinh co 2 nghiem phan biet:\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
            }
            else if (delta == 0) {
                x1 = -b / (2 * a);
                printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
            }
            else {
                printf("Phuong trinh vo nghiem.\n");
            }
        }

        printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
        getchar(); 
        scanf_s("%c", &kytu, 1);

    } while (kytu == 'Y' || kytu == 'y');

    return 0;
}
