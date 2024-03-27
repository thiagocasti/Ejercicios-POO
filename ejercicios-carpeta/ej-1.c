#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num = atoi(argv[1]);

    char *esPositivo = (num >= 0) ? "Es positivo\n" : "es negativo\n";

    printf("%s", esPositivo);
    return 0;
}
