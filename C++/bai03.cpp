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

template <class kieu_du_lieu>
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

int main()
{



	return 0;
}
