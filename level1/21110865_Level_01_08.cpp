#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	char s;
	printf("Nhap vao mot chu cai: "); 
	scanf_s("%c", &s, 1);
	if (s >= 'a' && s <= 'z')
		s = s - 32;
	else
		if (s >= 'A' && s <= 'Z')
			s = s + 32;
	printf("Chu cai sau khi thay doi la %c", s);
	return 0;
}