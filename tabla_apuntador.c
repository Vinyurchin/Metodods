#include <stdio.h>
#include <stdlib.h>

int main(){
    char seguir;
    int i, numero, n;
    int *buffer, *p_buffer;

    do
    {
        printf( "\n introduzca un numero: ", 163);
        scanf( "%d", &numero);

        buffer= (int *)malloc((n) * sizeof(int));
        if(buffer == NULL)
        exit(1);

        p_buffer = buffer;

        printf("\n La tabla de multiplicar del %d es: \n", numero);

        for(i = 1; i <= 10; i++){
            printf("\n %d * %d = %d", i, numero, i * numero);

        }
    }
}