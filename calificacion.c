#include <stdio.h>
#include <stdlib.h>

int main(){
    float calificacion;
    printf("Ingresa la calificacion: ");
    scanf("%f", &calificacion);

    if(calificacion >= 8){
        printf("¡Felicidades! aprobaste el curso\n");
    }
    if(calificacion < 8){
        printf("Lo sentimos, no has aprobado\n");
    }
}