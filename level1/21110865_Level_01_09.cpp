#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
					float x;
					int y;
					printf("Nhap vao so thuc x: ");
					scanf_s("%f", &x);
					if (x >= 0)
								y = int(x + 0.5);
					if (x < 0)
								y = int(x - 0.5);
					printf("Lam tron %.2f la: %i\n", x, y);

					return 0;
}

