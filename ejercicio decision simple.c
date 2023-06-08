#include <stdio.h>
#include <stdlib.h>

int main(){
    int sueldo = 7000;
    int antiguedad = 7;

    if(sueldo > 10000 && antiguedad >= 5){
        printf("Tiene derecho a crédito hipotecario\n");
    }

    if(sueldo < 10000 || antiguedad < 5){
        printf("Lo sentimos, no es legible a un crédito\n");
    }
}