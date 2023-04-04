#include <stdio.h>
int main()
{
	int num1 = 10;
	char char1 = 'A';
	double num2 = 4.32;
	int *a = &num1;
	char *b = &char1;
	double *c = &num2;
	printf("%p %p %p\n",a,b,c);
	printf("%p %p %p", &num1, &char1, &num2);
}
