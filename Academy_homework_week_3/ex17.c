#include <stdio.h>
int main()
{
        int len;
        printf("Enter a array size\n");
        scanf("%i", &len);
        int arr1[len];
        int arr2[len];
        int arr3[len];
        printf("Enter a first array's\n");
        for(int i = 0; i < len; ++i)
        {
                scanf("%i", &arr1[i]);
        }
        printf("Enter a second array's\n");
        for(int i = 0; i < len; ++i)
        {
                scanf("%i", &arr2[i]);
        }
        for(int i = 0; i < len; ++i)
        {
            arr3[i] = arr1[i] * arr2[i];
        }
        for(int i = 0; i < len; ++i)
        {
            printf("%i\n", arr3[i]);
        }
}