#include "Phan_so.h"

phan_so::phan_so()
{
	tu = 0;
	mau = 0;
}

phan_so::phan_so(int _tu, int _mau)
{
	tu = _tu;
	mau = _mau;
}

phan_so phan_so::nhan_phan_so(phan_so khac)
{
	phan_so ketqua;
	ketqua.tu = tu * khac.tu;
	ketqua.mau = mau * khac.mau;
	return ketqua;
}

phan_so phan_so::operator*(phan_so khac)
{
	phan_so ketqua;
	ketqua.tu = tu * khac.tu;
	ketqua.mau = mau * khac.mau;
	return ketqua;
}