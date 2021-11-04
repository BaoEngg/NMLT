#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
	int a, b, c;
	printf("Nhap a: "); scanf_s("%d", &a);
	printf("Nhap b: "); scanf_s("%d", &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	return 0;
}