#include <stdio.h>
#include <stdlib.h>

struct CD{
    char titulo[100];
    char artista[50];
    char num_canciones;
    char anio;
    char precio;

};

int main(void){
    
    struct CD cd1;
    printf("Ingresa el título\n");
    gets(cd1.titulo);

    printf("%s\n", cd1.titulo);

    printf("Ingresa el número de canciones");
    scanf("%d", &cd1.num_canciones);

    printf("Ingresa el año");
    scanf("%d", &cd1.anio);

    printf("Ingresa el precio");
    scanf("%d", &cd1.precio);

    printf("Los datos generados son:");
    printf("Número de canciones: %s", cd1.num_canciones);
    printf("El año de lanzamiento fue: %s", cd1.anio);
    printf("El precio es: %s", cd1.precio);

    return 0;
}