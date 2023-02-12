#include <stdio.h>
int main() {
    char sym;
    scanf("%c", &sym);
    if(sym>="0" && sym<="9")
        printf("false");
    else
        printf("true");
    return 0;
}
