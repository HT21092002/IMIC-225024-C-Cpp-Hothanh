//4. Viet chuong trinh in ra man hinh console ban cuu chuong.
#include<stdio.h>
void main() {
	for (int b = 2; b <= 9; b++) {
		printf("\n");
		for (int i = 1; i <= 10; i++) {
			printf("%2d x %2d =%d \t\n", b, i, b * i);
		}
	}
	return 0;
}