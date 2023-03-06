#include <stdio.h>
int main()
{
	int count;
	scanf("%i", &count);
	for(int x = 0; x < count; ++x)
	{
		printf("*");
		for(int y = 0; y < x; ++y)
		{
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}
