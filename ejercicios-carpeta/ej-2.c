#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num = atoi(argv[1]);

    char *esPar = (num % 2 == 0) ? "es par\n" : "es impar\n";
    printf("%s", esPar);

    return 0;
}
