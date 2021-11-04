#include <string.h>;
#include <math.h>;
#include <stdio.h>;
#include <stdlib.h>;

int main()
{
					float a, b, c;
					printf("Nhap a: "); scanf_s("%f", &a);
					printf("Nhap b: "); scanf_s("%f", &b);
					printf("Nhap c: "); scanf_s("%f", &c);
					if ((a > 0) && (b > 0) && (c > 0))
								if ((a + b > c) && (a + c > b) && (b + c > a))
												printf("HOP LE");
								else
												printf("Khong hop le");
					else printf("Khong hop le");
	return 0;
}