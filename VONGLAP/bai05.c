//4. Tính tiền gửi ngân hàng sau n năm
//Đề bài : Nhập vào số tiền gửi ban đầu, tiền lãi mỗi năm và số năm gửi tiền hãy tính số tiền nhận được sau n năm(biết lãi tính theo hình thức lãi kép).Biết lãi hiện tại của Viettinbank là 8.2 % / năm
#include<stdio.h>
int tinh_lai_kep(double n, int k) {
	double lai=1 ;
	double tong = n;
	for (int i = 1; i <= k; i++) {
		lai = tong * 0.082;
		tong +=  lai;
	}
	return tong;
}
void main(){
int k;
double tong, n;
char kytu;
do{
printf("Nhap vao so tien ban muon gui:");
scanf_s("%lf", &n);
printf("Nhap vao so nam: ");
scanf_s("%d", &k);
tong = tinh_lai_kep(n, k);
printf("So tien ban nhan duoc la:%lf\n ",tong);
while ((getchar()) != '\n'); // Xóa kí tự Enter
printf("Nhan Y neu ban muon tiep tuc, nguoc lai nhap ky tu khac: ");
scanf_s("%c", &kytu, 1);
} while (kytu == 'Y' || kytu == 'y');
return 0;
}