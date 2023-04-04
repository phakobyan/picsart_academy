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
	int min = arr[0];
	for(int i = 1; i < len; ++i)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	int max = arr[0];
	for(int i = 1; i < len; ++i)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%i\n", max + min);
}