#include <stdio.h>
int main()
{
	int len;
	printf("Enter a array size\n");
	scanf("%i", &len);
	int arr[len];
	printf("Enter a array's\n");
	for(int i = 0; i < len; ++i)
	{
		scanf("%i", &arr[i]);
	}
	for(int j = 0; j < len; ++j)
	{
		printf("%i", arr[j]);
	}

}
