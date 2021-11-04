#include <string.h>;
#include <math.h>;
#include <stdio.h>;
#include <stdlib.h>;

int main()
{
	int h, m, s;
	printf("Nhap h: "); scanf_s("%i", &h);
	printf("Nhap m: "); scanf_s("%i", &m);
	printf("Nhap s: "); scanf_s("%i", &s);
	if ((0 <= h && h <= 23) && (0 <= m && m <= 59) && (0 <= s && s <= 59))
	{
		printf("%02i:%02i:%02i la hop le", h, m, s);
	}
	else
	{
		printf("%02i:%02i:%02i la khong hop le", h, m, s);
	}
	return 0;
}
