#include <stdio.h>

int main()
{
    int len;
    printf("Enter a array Size:");
    do
    {
        scanf("%i", &len);
    }while(len == 0);
    
    int arr1[len];
    int arr2[len];
    
    printf("Enter an Array's:");
    for(int i = 0; i < len; ++i)
    {
        scanf("%i", &arr1[i]);
    }
    int y = 0;
    for(int i = len-1; i >= 0; --i)
    {
        arr2[y] = arr1[i];
        ++y;
    }
    printf("Youre Reserved numbers:");
    for(int i = 0; i < len; ++i)
    {
        printf("%i", arr2[i]);
    }
}
