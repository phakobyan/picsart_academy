#include <stdio.h>
int main()
{
	int a;
	printf("Enter a year ");
	scanf("%i",&a);
	if ( a%4 == 0 )
		printf("leap year \n");
	else
		printf("not a leap year \n");
	return 0;
}
