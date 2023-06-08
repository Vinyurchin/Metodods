#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 17, y;
    int *p;
    p = &x;
    printf("El valor de X es: %p", *p);
    printf("\n");
    y = *p + 3;
    printf("El valor de Y es: %d", y);
    printf("\n");
}