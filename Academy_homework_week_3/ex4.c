#include <stdio.h>
int func()
{
        int num;
        int result = 0;
        do
        {
                printf("Enter a number\n");
                scanf("%i", &num);
        }
        while(num < 10);
        for(int y = num; y >= 1;y= y / 10 )
        {
                result = result + (y % 10);
        }
        printf("%i", result);
        return 0;

}
int main()
{
        func();
}
