#include <stdio.h>

int main()
{
 int arr[] = {1, 2, 3};
 int *ptr;
 ptr = arr;
 int res = sizeof(arr) / sizeof(arr[0]);
 for(int i = 0; i < res; ++i)
 {
	printf("%i\n", *ptr+i*res);
 }
}
    
