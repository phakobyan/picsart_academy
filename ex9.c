#include <stdio.h>
int main()
{
	int num;
	scanf("%i", &num);
	int i = num;
	while(i != num / i)
	{
		i = i-1;
	}
	printf("%i", i);

}
