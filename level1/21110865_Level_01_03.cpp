#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() 
{ 
	float dai, rong, chuvi;
	printf("Nhap chieu dai: "); scanf_s("%f", &dai);
	printf("Nhap chieu rong: "); scanf_s("%f", &rong);
	chuvi = (dai + rong)*2;
	printf("Chu vi la: %.2f\n", chuvi); /* .2f là in ra hai so le */
	return 0;
}