#include "phan_so.h"
#include <stdio.h>

    int main() {
        PhanSo a, b;

        // Gán giá trị trực tiếp
        a.tu = 2; a.mau = 3;
        b.tu = 4; b.mau = 5;

        printf("Phan so a: %d/%d\n", a.tu, a.mau);
        printf("Phan so b: %d/%d\n", b.tu, b.mau);

        PhanSo c = a.nhan(b);
        printf("a * b = %d/%d\n", c.tu, c.mau);

        return 0;
    }