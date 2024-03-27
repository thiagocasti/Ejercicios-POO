#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num = atoi(argv[1]);

    if(num % 2 == 0){
        printf("El numero es multiplo de 2\n");
    }else if(num % 3 == 0){
        printf("El numero es multiplo de 3\n");
    }else{
        printf("EL numero no es multiplo de 2 ni de 3\n");
    }
}