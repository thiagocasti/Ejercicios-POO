#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int n3 = atoi(argv[3]);
    
    char *esPositivo = (n1 == n2 && n1 == n3) ? "Son iguales" : (n1 > n2 && n1 > n3) ? "El primer numero es el mayor" : (n2 > n3) ? "El segundo numero es el mayor" : "El tercer numero es el mayor"; 
    printf("%s", esPositivo);
    return 0;
}