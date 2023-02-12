#include <stdio.h>
int main() {
    int x;
    int y;
    scanf("%i%i", &x,&y);
    double res = x * y + 21 * x / y - 200;
    printf("%lf", res);
    
    return 0;
}
