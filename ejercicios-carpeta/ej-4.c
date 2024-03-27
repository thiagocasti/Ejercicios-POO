#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int n3 = atoi(argv[3]);

    if(n1 > n2){
        if(n1 > n3){
            printf("El primer numero es el mayor\n");
        }
        }else if(n2 > n3){
            printf("El numero 2 es el mayor\n");
        }else{
            printf("El numero 3 es el mayor\n");
        }
    return 0;
}