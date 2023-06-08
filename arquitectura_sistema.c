#include <stdio.h>

int main(){
    unsigned int i = 0;
    char *c = (char *)&i;
    if(*c){
        printf("Tu sistema es Little endian \n");
    } else{
        printf("Tu sistema es Big endian \n");
    }
}