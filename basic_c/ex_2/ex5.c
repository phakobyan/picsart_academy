#include <stdio.h>
int main()
{	
	signed int a,b,c,d;
	scanf("%i%i%i%i", &a,&b,&c,&d);
        if (a + b + c + d == 0)
	{
		if(a <= b && a <= c && a <= d)
			printf("%i", a);
		else if (b <= a && b <= c && b <= d)
			printf("%i", b);
		else if (c <= a && c <= b && c <= d)
			printf("%i", c);
		else if (d <= a && d <= b && d <= c)
			printf("%i", d);

	}
	else
		printf("try again");
	return 0;
} 

