#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	float a, b, c, d, max;
	printf("Nhap vao 4 so a, b, c, d : ");
	scanf_s("%f%f%f%f", &a, &b, &c, &d);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	printf("So lon nhat trong 4 so la %.2f\n", max);

	return 0;
}