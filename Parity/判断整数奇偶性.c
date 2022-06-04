#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long q = 0;
	while ((scanf("%ld", &q)) != EOF)
	{
		if (!(q % 2))
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
	}
	return 0;
}