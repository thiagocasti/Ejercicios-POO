#include <stdio.h>

int main(void){
    int numero;

    printf("Ingrese el numero a comprobar si es par: ");
    scanf("%d", &numero);

    char *esPar = (numero > 0 && numero % 2 == 0) ? "Es  par" : "Es impar o el numero es igual a cero"; 
    printf("%s", esPar);
    return 0;
}