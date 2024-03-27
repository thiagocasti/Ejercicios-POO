#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num = atoi(argv[1]);

    char *esPar = (num % 2 == 0) ? "es par\n" : "es impar\n";
    printf("%s", esPar);

/*
    if(num % 2 == 0){
        printf("Es par");
    }else if(num % 2 >= 1){
        printf("Es impar");
    }else{
        printf("Es 0");
    }
*/
    return 0;
}
