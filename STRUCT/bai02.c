#include<stdio.h>
struct fraction {
	int numerator;
	int denominator;
};
void import_fraction(struct fraction *a) {
	printf("Nhap vao tu so: ");
	scanf_s("%d", &a->numerator);  // dùng -> để truy cập thành viên
	printf("Nhap vao mau so: ");
	scanf_s("%d", &a->denominator);
	printf("Phan so ban vua nhap: %d/%d\n", a->numerator, a->denominator);
}
void Sum(struct fraction a, struct fraction b, struct fraction* result) {
	result->numerator = a.numerator * b.denominator + a.denominator * b.numerator;
	result->denominator = a.denominator * b.denominator;
}
void  Minus(struct fraction a, struct fraction b, struct fraction* result) {
	result->numerator = a.numerator * b.denominator - a.denominator * b.numerator;
	result->denominator = a.denominator * b.denominator;
}
void Core(struct fraction a, struct fraction b, struct fraction* result) {
	result->numerator = a.numerator * b.numerator;
	result->denominator = a.denominator * b.denominator;
}
void Divide(struct fraction a, struct fraction b, struct fraction* result) {
	result->numerator = a.numerator * b.denominator;
	result->denominator = a.denominator * b.numerator;
}
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
void Simplify(struct fraction* f) {
	int ucln = gcd(f->numerator, f->denominator);
	f->numerator /= ucln;
	f->denominator /= ucln;

	// Đảm bảo mẫu dương
	if (f->denominator < 0) {
		f->numerator *= -1;
		f->denominator *= -1;
	}
}
void main() {
	struct fraction a,b;
	struct fraction sum,minus,core,divide;
	
	// nhap phan so a
	printf("Nhap vao tu so A: ");
	scanf_s("%d", &a.numerator);  
	printf("Nhap vao mau so A: ");
	scanf_s("%d", &a.denominator);
	//nhap phan so b
	printf("Nhap vao tu so B: ");
	scanf_s("%d", &b.numerator);  
	printf("Nhap vao mau so B: ");
	scanf_s("%d", &b.denominator);
	//nhan 2 phan so
	Core(a, b, &core);
	Simplify(&core);
	printf("Tich hai phan so: %d/%d\n", core.numerator, core.denominator);
	//chia hai phan so
	Divide(a, b, &divide);
	Simplify(&divide);
	printf("Thuong hai phan so:%d/%d\n", divide.numerator, divide.denominator);
	//cong hai phan so
	Sum(a, b, &sum);
	Simplify(&sum);
	printf("Tong hai phan so:%d/%d\n", sum.numerator, sum.denominator);
	// tru hai phan so
	Minus(a, b, &minus);
	Simplify(&minus);
	printf("Tong hai phan so:%d/%d\n", minus.numerator, minus.denominator);
	// rut gon hai phan so
	 }