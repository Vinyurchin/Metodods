#include <stdio.h>
#include <stdlib.h>

int main(){
    double a = 5;
    double b = 2;
    double c = 1;
    double d = 4;
    double x;

    x=(a+(b/(c/(c+(b/(b-(c/d)))))));
    printf("El resultado es %f\n", x);
}