#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int a, b, c;
	printf("Nhap ba so nguyen a,b,c :"); 
	scanf_s("%i%i%i", &a, &b, &c);
	if (a > b && a > c)
		if (b > c)
			printf("So lon nhi la: %i", b);
		else 
			printf("So lon nhi la: %i", c);
	else
	{
		if (b > c && b > a)
			if (a > c)
				printf("So lon nhi la: %i", a);
			else 
				printf("So lon nhi la: %i", c);
		else
			if (c > a && c > b)
				if (a > b)
					printf("So lon nhi la: %i", a);
				else
					printf("So lon nhi la: %i", b);
	}
		
	return 0;
}