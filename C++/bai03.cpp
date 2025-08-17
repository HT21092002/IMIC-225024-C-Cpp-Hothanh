#include<stdio.h>
#include <malloc.h>
#include <iostream>
#include "Phan_so.h"
using namespace std;
struct Phan_so
{
	int tu;
	int mau;
};

template <class kieu_du_lieu,int sl>
class mang
{
public:
	int so_luong;
	kieu_du_lieu* dia_chi;
	mang(int sl)
	{
		so_luong = sl;
		dia_chi = (kieu_du_lieu*)calloc(so_luong, sizeof(kieu_du_lieu));
	}

	kieu_du_lieu& operator[](int i)
	{
		
		return dia_chi[i];
	}

	~mang()
	{
		free(dia_chi);
	}
};
template <class kieu_du_lieu>
class mang_co_dan
{
private:
    int so_luong;
    kieu_du_lieu* dia_chi;

public:
    // Constructor
    mang_co_dan(int sl)
    {
        so_luong = sl;
        dia_chi = (kieu_du_lieu*)calloc(so_luong, sizeof(kieu_du_lieu));
    }

    // Destructor
    ~mang_co_dan()
    {
        free(dia_chi);
    }

    // Toán tử []
    kieu_du_lieu& operator[](int i)
    {
        if (i < 0 || i >= so_luong) {
            cout << "Chi so khong hop le!\n";
            exit(1);
        }
        return dia_chi[i];
    }

    // Hàm thay đổi kích thước (resize)
    void thay_doi_kich_thuoc(int kich_thuoc_moi)
    {
        dia_chi = (kieu_du_lieu*)realloc(dia_chi, kich_thuoc_moi * sizeof(kieu_du_lieu));
        if (!dia_chi) {
            cout << "Khong du bo nho!\n";
            exit(1);
        }
        // Nếu mảng to hơn thì phần mới sẽ random, có thể memset về 0
        if (kich_thuoc_moi > so_luong) {
            for (int i = so_luong; i < kich_thuoc_moi; i++) {
                dia_chi[i] = kieu_du_lieu(); // gán mặc định
            }
        }
        so_luong = kich_thuoc_moi;
    }

    // Trả về số lượng
    int kich_thuoc() const
    {
        return so_luong;
    }
};
int main()
{
	return 0;
}
