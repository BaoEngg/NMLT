#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{	
	float a, b, c, d, x, x1, x2 ;
	printf("Nhap vao 3 so nguyen a, b, c: \n"); 
	scanf_s("%f%f%f", &a, &b, &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				printf("PT co vo so nghiem.\n");
			else
				printf("PT vo nghiem.\n");
		}
		else
			printf("PT co nghiem la: %.2f", -c / b);
	}
	else 
	{
		d = pow(b, 2) - 4 * a * c;
		if (d > 0)
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			printf("PT co hai nghiem phan biet:\n x1 = %.2f\n x2 = %.2f\n", x1, x2);
		}
		else
		{
			if (d == 0)
				printf("PT co nghiem kep la x = %.2f\n", -b / (2 * a));
			else
				printf("PT vo nghiem\n");
		}
	}
	return 0;
}
