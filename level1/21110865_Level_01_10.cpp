#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() 
{
	float a, c;
	int b;
	printf("Nhap so thuc a: ");
	scanf_s("%f", &a);
	c = a - int(a);
	if ((a >= 0) && (c != 0))	
		printf("So nguyen lon nhat nhung nho hon %.1f la %i", a,int(a));
	else
		printf("So nguyen lon nhat nhung nho hon %.1f la %i", a, int(a)-1);
	return 0;
}