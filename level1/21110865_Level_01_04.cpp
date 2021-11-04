#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{ 
	int a, b, max;
	printf(" Nhap a: "); scanf_s("%i", &a);
	printf(" Nhap b: "); scanf_s("%i", &b);
	max = a;
	if (b> max)
		max = b;
	printf(" So lon hon la: %d\n", max);
	return 0;
}