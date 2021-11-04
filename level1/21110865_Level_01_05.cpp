#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int x, y;
	printf("Nhap vao nam: "); scanf_s("%i", &y);
	x = y % 4;
	if (x == 0)
		printf("Nam %i la nam nhuan.\n", y);
	else
		printf("Nam %i khong la nam nhuan.\n", y);
	return 0;
}
