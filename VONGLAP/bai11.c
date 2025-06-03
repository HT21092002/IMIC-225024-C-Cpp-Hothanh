//10. viết chương trình in ra cách đọc số bằng chữ.
//VD: nhập vào 1234 in ra "mot ngan hai tram ba muoi bon"
#include <stdio.h>

void docSo(int so) {
    switch (so) {
    case 0: printf("khong "); break;
    case 1: printf("mot "); break;
    case 2: printf("hai "); break;
    case 3: printf("ba "); break;
    case 4: printf("bon "); break;
    case 5: printf("nam "); break;
    case 6: printf("sau "); break;
    case 7: printf("bay "); break;
    case 8: printf("tam "); break;
    case 9: printf("chin "); break;
    }
}

int main() {
    int n;
    printf("Nhap so (toi da 4 chu so): ");
    scanf_s("%d", &n);

    if (n < 0 || n > 9999) {
        printf("So khong hop le!\n");
        return 1;
    }

    int nghin = n / 1000;
    int tram = (n % 1000) / 100;
    int chuc = (n % 100) / 10;
    int donvi = n % 10;

    if (nghin > 0) {
        docSo(nghin);
        printf("ngan ");
    }

    if (tram > 0 || (nghin > 0 && (chuc > 0 || donvi > 0))) {
        docSo(tram);
        printf("tram ");
    }

    if (chuc > 0) {
        if (chuc == 1)
            printf("muoi ");
        else {
            docSo(chuc);
            printf("muoi ");
        }
    }
    else if (donvi > 0 && (tram > 0 || nghin > 0)) {
        printf("linh ");
    }

    if (donvi > 0) {
        if (donvi == 1 && chuc >= 1)
            printf("mot ");
        else if (donvi == 5 && chuc >= 1)
            printf("lam ");
        else
            docSo(donvi);
    }

    printf("\n");
    return 0;
}