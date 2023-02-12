#include <stdio.h>
int main() {
    double x;
    scanf("%lf", &x);
    double res = x / (5 + 2) + 30 * x - 51;
    printf("%lf", res);
    return 0;
}
