#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	
	int a, b;
	printf("Nhap a: "); scanf_s("%i", &a);
	printf("Nhap b: "); scanf_s("%i", &b);
	if (b == 0)
		printf("Khong chia duoc\n");
	else
		printf_s("Thuong cua a/b la %d", a/b);

	return 0;
}
