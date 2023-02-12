#include <stdio.h>
int main() {
    int A = 0;
    int B = 0;
    int res = !(A && B) || A && !B || A;
    printf("A = %i, B = %i, res = %i \n", A, B, res);
    A = 1;
    res = !(A && B) || A && !B || A;
    printf("A = %i, B = %i, res = %i \n", A, B, res);
    A = 0;
    B = 1;
    res = !(A && B) || A && !B || A;
    printf("A = %i, B = %i, res = %i \n", A, B, res);
    A = 1;
    res = !(A && B) || A && !B || A;
    printf("A = %i, B = %i, res = %i \n", A, B, res);
    return 0;
}
