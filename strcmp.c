#include <stdio.h>
#include <stdlib.h>

int main(){
    int res;
    char str1[]="brisas";
    char str2[]= "para";
    res = strcmp( str1, str2);
    printf("Resultado: %d", res);
    printf("\n");
    return 0;
}