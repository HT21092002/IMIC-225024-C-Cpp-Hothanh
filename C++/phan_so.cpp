#include "phan_so.h"
#include <stdio.h>

PhanSo::PhanSo() {
    printf("Ham tao duoc khoi chay\n");
    tu = 0;
    mau = 1; // tránh mẫu = 0
}

PhanSo PhanSo::operator*(PhanSo ps) {
    PhanSo kq;
    kq.tu = tu * ps.tu;
    kq.mau = mau * ps.mau;
    return kq;
}