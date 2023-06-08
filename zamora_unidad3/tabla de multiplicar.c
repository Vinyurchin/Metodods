#include <stdlib.h>
#include <stdio.h>

int main(){

int i, j, mult;

printf ("Introduce el primer digito a multiplicar: ");
scanf("%d, &n");

printf ("Introduce la segunda cantidad a multiplicar: ");
scanf("%d, &m");

for (i=1; i<=10; i++){
    for (j = 1; j <= 10; j++){
        mult = i * j;
        printf("%d\t", mult); 
    }
    printf("\n");
}
return 0;
}
//ls  -ln (para poder ver los directorios)
//cd Documents (Entrar en opciones de documentos)
//gcc tabla de multiplicar(jesus).c -0 Tabla de multiplicar
//Lo de arriba es para compilar y ejecutar un programa 