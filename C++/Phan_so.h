#pragma once
class phan_so
{
public:
	int tu;
	int mau;

	phan_so();
	phan_so(int _tu, int _mau);
	phan_so nhan_phan_so(phan_so khac);
	phan_so operator*(phan_so khac);

};