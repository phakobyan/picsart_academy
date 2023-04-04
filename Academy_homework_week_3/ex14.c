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
	int min_index = 0;
	for(int i = 1; i < len; ++i)
	{
		if(arr[i] < min)
		{
			min_index = i;
		}
	}
	printf("Your minimum number index is: %i", min_index);
}