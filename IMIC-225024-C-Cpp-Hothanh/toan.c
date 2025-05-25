int cong(int a, int b) {
	int cong = 0;
	cong = a + b;
		return cong;
}
int nhan(int a, int b) {
	int ketqua = 0;
		for (int i = 0; i < b; i++) {
			ketqua = cong(ketqua, a);
		}
	return ketqua;
}