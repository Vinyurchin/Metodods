#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre;
    int edad;

    printf("Introduce tu nombre");
    scanf("%d", &nombre);
    printf("Introduce tu edad");
    scanf("%d", &edad);

    printf("Tu nombre es: %s \n", nombre);
    printf("Tu edad es: %s \n", edad);
}