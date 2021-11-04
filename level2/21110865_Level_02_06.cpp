#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
				float a, b, c;
				int m=0, n=0;
				printf("Nhap a: "); scanf_s("%f", &a);
				printf("Nhap b: "); scanf_s("%f", &b);
				printf("Nhap c: "); scanf_s("%f", &c);
				if ((a > 0) && (b > 0) && (c > 0))
								if ((a + b > c) && (a + c > b) && (b + c > a))
								{
												if (a == b && a == c)
																printf("Tam giac deu");
												else
												{
																if ((a == b) || (a == c) || (b == c))
																				m = 1;
																if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
																				n = 1;
																if ((m == 1) && (n == 0))
																				printf("\nTam giac can\n");
																if ((m == 0) && (n == 1))
																				printf("\nTam giac vuong\n");
																if ((m == 1) && (n == 1))
																				printf("\nTam giac vuong can\n");
																if ((m == 0) && (n == 0))
																				printf("\nTam giac thuong\n");

												}
												
								}
								else
												printf("Khong hop le");
				else printf("Khong hop le");
				
	return 0;
}