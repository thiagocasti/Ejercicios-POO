#include <stdio.h>

int main(void){
    int n;

    printf("Ingrese un numero para convertirlo en su valor absoluto: ");
    scanf("%d", &n);

    int numeroAbsoulto = (n < 0) ? (n * -2) + n : n;

    printf("El valor absoluto es: %d", numeroAbsoulto);
}