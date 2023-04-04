#include <stdio.h>
int find_min(int arr[], int len);
int main()
{
	int len;
	printf("Enter a size of array\n");
	do
	{
	scanf("%i", &len);
	}while(len <= 0);
	int arr[len]; 	
	printf("Enter a array of size %i\n", len);
	for(int i = 0; i < len; ++i)
	{
		scanf("%i", &arr[i]);
	}
	printf("Minimum value is %i\n", find_min(arr, len));
       return 0;	

}
int find_min(int arr[], int len )
{	int min = arr[0];
	for(int i = 1; i < len; ++i)
	{
		if( arr[i] < min ) 
			min = arr[i];
	}
	return min;
}
