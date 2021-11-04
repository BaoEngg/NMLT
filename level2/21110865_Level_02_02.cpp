#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{	
	float a, b;
	printf("Nhap 2 so nguyen a,b:"); scanf_s("%f%f", &a, &b);
	printf("PT co dang %.0fx + %.0f = 0\n",a ,b);
	if (a == 0)
	{
		if (b == 0)
			printf("PT co vo so nghiem.\n");
		else 
			printf("PT vo nghiem.\n");
	}
	else 
		printf("PT co nghiem la: %.2f",-b/a);
	printf("\n");
	return 0;
}
