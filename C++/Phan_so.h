#pragma once
class PhanSo {
public:
    int tu;
    int mau;

    PhanSo();                  // Hàm tạo
    PhanSo operator*(PhanSo ps);    // Hành vi: nhân với phân số khác

};