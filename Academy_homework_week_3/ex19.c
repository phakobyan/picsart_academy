#include <stdio.h>

int main()
{
    int len;
    printf("Enter a array Size:");
    do
    {
        scanf("%i", &len);
    }while(len == 0);
    
    int arr[len];
    
    printf("Enter an Array's:");
    for(int i = 0; i < len; ++i)
    {
        scanf("%i", &arr[i]);
    }
    int res = 0;
    for(int i = 0; i < len; ++i)
    {
        res = res + arr[i];
    }
    res = res / len;
    printf("Your a average is:%i", res);
}
    
