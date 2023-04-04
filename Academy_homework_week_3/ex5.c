#include <stdio.h>
int main()
{
	int len;
	scanf("%i", &len);

	for(int x = 0;x != len; ++x)
	{
		printf("*");
	}
	for(int y = 0;y != len - 2; ++y)
	{
		printf("\n*");
		for(int z = 0; z != len - 2; ++z)
		{
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for(int x = 0;x != len; ++x)
	{

		printf("*");
	}

}
