#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    char origen[] = "brisas";
    char destino[11] = "para";
    strcat(destino, origen);
    printf("destino:\n %s", destino);
    printf("\n");
}