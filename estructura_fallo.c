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
    fgets(cd1.titulo, sizeof(cd1.titulo), stdin);

    printf("Ingresa el número de canciones: ");
    scanf("%s", &cd1.num_canciones);

    printf("Ingresa el año: ");
    scanf("%s", &cd1.anio);

    printf("Ingresa el precio: ");
    scanf("%s", &cd1.precio);

    printf("Los datos generados son:\n");
    printf("El título es: %s\n", cd1.titulo);
    printf("Número de canciones:\n %s", cd1.num_canciones);
    printf("El año de lanzamiento fue: %s\n", cd1.anio);
    printf("El precio es: %s\n", cd1.precio);

    return 0;
}