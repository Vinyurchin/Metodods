#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int x = 0x12345678;
    unsigned char *p = (unsigned char *) &x;

    if(htonl(1) == 1){
        printf("El host es big endian\n");
    } else {
        (print("El host es little endian\n"));
    }

    printf("El valor 0x%x en el orden de bytes del host es: 0x%x 0x%x 0x%x 0x%x\n", x, p[0], p[1], p[2], p[3]);

    return 0;
}