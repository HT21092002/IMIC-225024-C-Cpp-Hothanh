#pragma once
#ifndef PHAN_SO_H
#define PHAN_SO_H

#include <stdio.h>

// Định nghĩa phân số
struct phan_so
{
    int tu;
    int mau;
};

// Khai báo hàm cộng phân số
phan_so cong(phan_so a, phan_so b);

// Template class mảng động
template <class T>
class Mang
{
private:
    int so_luong;
    T* dia_chi;

public:
    // Constructor
    Mang(int sl)
    {
        so_luong = sl;
        dia_chi = new T[so_luong];
    }

    // Destructor
    ~Mang()
    {
        delete[] dia_chi;
    }

    // Toán tử []
    T& operator[](int i)
    {
        return dia_chi[i];
    }

    // Hàm lấy kích thước
    int size() const
    {
        return so_luong;
    }
};

#endif
