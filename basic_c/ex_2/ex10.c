#include <stdio.h>
int main()
{
	char a,b;
	scanf("%c%c", &a,&b);
	if(a - b == 32 || b - a == 32)
		printf("right");
	else
		printf("wrong");
	return 0;
}
