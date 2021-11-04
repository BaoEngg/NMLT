#include <string.h>;
#include <math.h>;
#include <stdio.h>;
#include <stdlib.h>;

int main()
{
					int h, m, s, a;
					printf("Nhap h: "); scanf_s("%i", &h);
					printf("Nhap m: "); scanf_s("%i", &m);
					printf("Nhap s: "); scanf_s("%i", &s);
					if ((0 <= h && h <= 23) && (0 <= m && m <= 59) && (0 <= s && s <= 59))
									{
									a = h * 3600 + m * 60 + s + 1;
									h = a / 3600;
									a = a % 3600;
									m = a / 60;
									a = a % 60;
									s = a;
									if (h >= 24) 
													h = h - 24;
									printf("%02i:%02i:%02i la ket qua sao khi cong 1 giay", h, m, s);
									}
					else
									{
												printf("%02i:%02i:%02i la khong hop le", h, m, s);
									}
					return 0;
}
