#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int x; 
	printf("Nhap so nguyen: "); scanf_s("%d", &x);
	if (x < 0)
		x = -x;
	printf("Tri tuyet doi la: %d\n", x);
	return 0;
}