#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int a, b, c, min;
	printf("Nhap vao 3 so a, b, c: ");
	scanf_s("%i%i%i", &a, &b, &c);
	min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	printf("Min la %i", min);
	return 0;
}
