#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    char cad[] = "Es una cadena";
    len = strlen(cad);
    printf("La longitud de:\'%s\' es: %d\n", cad, len);
    return 0;
}