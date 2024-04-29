#include <stdio.h>

int main(void){
    char *selection[] = {"No puede seleccionar 0", "piedra", "papel", "tijera"};
    int option;
    printf("Hola! este es un juego de piedra papel o tijera.\n Este juego consiste en competir contra un bot (su computadora) en 5 rondas donde va a tener 3 jugadas en cada una.\n Se le sumara un punto a usted cada vez que elija la opcion correcta, si  la maquina elijio correctamente se le sumara un punto a la maquina.\n Consiga la mayor cantidad de puntos y compita contra la aleatoridad de su computadora!\n\n");

    printf("Elija a que le juega(Ingrese 1 para piedra, 2 para papel y 3 para tijera): ");
    scanf("%d", &option);


    

    return 0;
}