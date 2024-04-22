#include <stdio.h>

int main(void){
    int edad, genero, peso;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese su genero(1 para hombre, 2 para mujer): ");
    scanf("%d", &genero);
    printf("Ingrese su peso(sin decimales): ");
    scanf("%d", &peso);

    int fcm = (genero == 1) ?  ((210 - (0,5 * edad))) - (peso * 0.01) + 4 : (210 -(0,5 * edad)) - (peso * 0.01);

    printf("Su fcm es: %d", fcm);

    return 0;
}