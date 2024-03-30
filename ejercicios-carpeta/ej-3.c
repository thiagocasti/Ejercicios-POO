#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num = atoi(argv[1]);

    char *esMultiplo = (num % 2 == 0 && num % 3 == 0) ? "es multiplo de 2 y de 3\n" : (num % 2 == 0) ? "Es multiplo de 2\n" : (num % 3 == 0) ? "Es multpilo de 3\n" : "no es multiplo ni de 2 ni de 3\n";
    printf("%s", esMultiplo);
    return 0;
}