#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res;
    char palabra1[20];
    char palabra2[20];

    printf("Escriba una palabra: \n");
    scanf("%s", palabra1);
    printf("Escriba una segunda palabra: \n");
    scanf("%s", palabra2);
    res = strcmp(palabra1, palabra2);

    if (res == 0)
    {
        printf("La cantidad es igual \n");
    }
    else if (res > 0)
    {
        printf("La palabra %s es mayor que: %s \n", palabra1, palabra2 );
    }
    else if (res < 0)
    {
        printf("La palabra %s es menor que: %s \n", palabra1, palabra2);
    }
}                                                                                                                                                                                                     