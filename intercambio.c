#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    char programacion[20];
    char computadora[20];
    char cambio[20];
    printf("Introduzca una palabra: \n");
    scanf("%s", programacion);
    printf("Introduzca otra palabra: \n");
    scanf("%s", computadora);
    printf("Antes\n");
    printf("palabra 1: %s\n", programacion);
    printf("Palabra 2: %s\n", computadora);
    strcpy(cambio, programacion);
    strcpy(programacion, computadora);
    strcpy(computadora, cambio);
    printf("despues\n");
    printf("palabra 1: %s\n", programacion);
    printf("Palabra 2: %s\n", computadora);
}