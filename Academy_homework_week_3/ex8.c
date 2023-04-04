#include <stdio.h>
int main()
{
	int num;
	int res = 1;
	printf("Enter a number\n");
	scanf("%i", &num);
	for(int i = num;i != 0; --i)
	{
		res = res * i;
	}
	printf("%i", res);
}
