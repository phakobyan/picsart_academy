#include <stdio.h>
int func()
{
	int num;
	int result = 0;
	do
	{
		printf("Enter a number bigger 12\n");
		scanf("%i", &num);
	}
	while(num < 12);
	for(int y = num; y >= 1;y= y / 10 )
	{
		result = result * 10 + (y % 10);
	}
	printf("%i", result);
	return 0;

}
int main()
{
	func();
}
