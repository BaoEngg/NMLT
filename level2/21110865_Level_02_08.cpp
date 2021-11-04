#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
					int a;
					printf("Nhap vao so a bat ki: "); scanf_s("%i", &a);
	
					switch (a)
					{
					case 1: {printf("Mot\n");
						break;}
		
					case 2: {printf("Hai\n"); 
						break;}
		
					case 3: {printf("Ba\n");
						break;}
		
					case 4: {printf("Bon\n");
						break;}
		
					case 5: {printf("Nam\n");
						break;}

					case 6: {printf("Sau\n");
						break;}

					case 7: {printf("Bay\n");
						break;}

					case 8: {printf("Tam\n");
						break;}
		
					case 9: {printf("Chin\n");
						break;}
		
						default:
						{
							printf("\aKhong doc duoc\n");
							break;
					}
					}
					return 0;
}