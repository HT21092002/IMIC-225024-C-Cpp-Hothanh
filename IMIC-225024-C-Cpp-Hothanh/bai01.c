#include <stdio.h>
void main() {
	int a=1234;
	int b, c;
	b = (a >> 8) & 0xFF;
	c = a & 0xFF;
	printf("%b\n", b);
	printf("%b\n", c);
	
}