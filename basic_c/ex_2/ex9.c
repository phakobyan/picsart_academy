#include <stdio.h>
int main()
{
	int a,b;
	scanf("%i%i", &a,&b);
	if(a != 0 && b != 0)
	{
		if(a % b == 0 || b % a == 0)
			printf("yes this numbers can divide");
		else
			printf("no this numbers can divide");
	}
	else
		printf("please write a not zero number");
	return 0;
		

}
