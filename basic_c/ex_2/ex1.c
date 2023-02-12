#include <stdio.h>
int main ()
{
	int a;
	scanf("%i",&a);
	if (a > 0 &&  a%2 == 0)
	{
		printf("Even Number\n");
	}
	else if (a > 0 && a&2 != 0)
	{
		printf("Odd Number\n");
	}
	else
		printf("Write a natural number\n");
	return 0;
}
