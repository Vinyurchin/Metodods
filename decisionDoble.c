#include <stdio.h>
#include <stdlib.h>

int main(){
    float hst, ph, salario;

    printf("Ingresa las horas trabajadas en esta semana: ");
    scanf("%f" &hst);

    printf("Ingresa el pago por hora");
    scanf("%f", &ph);

    if(hst <= 40){
        salario = hst * ph;

    }else{
        salario = 40 * ph + (hst - 40) * ph * 1.5
    }
}