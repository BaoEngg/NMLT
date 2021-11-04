#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int month, year;
	printf(" Nhap lan luot thang va nam: "); 
	scanf_s("%i%i", &month, &year);
	switch (month)
	{
		case 1: {
			printf("Co 31 ngay.");
			break;
		}
		case 2: {
			if (year % 4 == 0 && year % 100 != 0)
				printf("Co 29 ngay.");
			else
				printf("Co 28 ngay.");
			break;
		}
		case 3: {
			printf("Co 31 ngay.");
			break;
		}
		case 4: {
			printf("Co 30 ngay.");
			break;
		}
		case 5: {
			printf("Co 31 ngay.");
			break;
		}
		case 6: {
			printf("Co 30 ngay.");
			break;
		}
		case 7: {
			printf("Co 31 ngay.");
			break;
		}
		case 8: {
			printf("Co 31 ngay.");
			break;
		}
		case 9: {
			printf("Co 30 ngay.");
			break;
		}
		case 10: {
			printf("Co 31 ngay.");
			break;
		}
		case 11: {
			printf("Co 30 ngay.");
			break;
		}
		case 12: {
			printf("Co 31 ngay.");
			break;
		}
	
		}
	return 0;
}