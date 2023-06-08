#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int len;
    char origen[50];
    char destino[50];
    printf("Introduzca una palabra: \n");
    scanf("%s", origen);
    printf("Escribe otra palabra: \n");
    scanf("%s", destino);
    len = strlen(origen);
    for (int i = 0; i < len; i++)
    {
        strcat(origen, destino);
    }
    printf("destino: %s", origen);
    printf("\n");
}