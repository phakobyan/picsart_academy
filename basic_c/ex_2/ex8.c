#include <stdio.h>

int main()
{
   signed int num, n, newNum;

    printf("Enter any number: ");
    scanf("%d", &num);
    n = 5;
    newNum = (1 << n) | num;
    printf("%d \n",newNum);

    return 0;
}
