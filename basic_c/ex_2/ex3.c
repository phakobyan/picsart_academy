#include <stdio.h>
int main()
{
	int a,b;
	scanf("%i%i", &a,&b);
	if(a > b)
		printf("%i", a);
	else if(a < b)
		printf("%i", b );
	else
		printf("equal");
	return 0;
}
