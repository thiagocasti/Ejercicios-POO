#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int userOption;
    int puntosComputadora = 0;
    int puntosUsuario = 0;
    printf("Hola! este es un juego de piedra papel o tijera.\n Este juego consiste en competir contra un bot (su computadora) en 5 rondas donde va a tener 3 jugadas en cada una.\n Se le sumara un punto a usted cada vez que elija la opcion correcta, si  la maquina elijio correctamente se le sumara un punto a la maquina.\n Consiga la mayor cantidad de puntos y compita contra la aleatoridad de su computadora!\n\n");
    srand(time(0));



    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 3; j++){
                printf("\nRonda: %d Jugada: %d\n", i, j);
                printf("Elija a que le juega(Ingrese 1 para piedra, 2 para papel y 3 para tijera): ");
                scanf("%d", &userOption);

                int computerElection = rand() % 3 + 1;

                if(computerElection == userOption){
                    puntosUsuario == puntosComputadora;
                     printf("Usted empato!\n");
    
                }else if((userOption == 1 && computerElection == 2) ||
                (userOption == 2 && computerElection == 3) ||
                (userOption == 3 && computerElection == 1)){
                    printf("Usted gano!\n");
                    puntosUsuario++;
                
                }else{
                    printf("Usted perdio!\n");
                    puntosComputadora++;
                  
                }
                 printf("Puntos usted: %d\n", puntosUsuario);
                 printf("Puntos computadora: %d\n", puntosComputadora);    
                }
        }

        char *quienGano = (puntosUsuario == puntosComputadora) ? "'\nUsted empato\n" : (puntosUsuario > puntosComputadora) ? "\nUsted gano la partida\n" : "\nLa computadora gano la partida!\n";
        printf("%s", quienGano);
            return 0;
    }

   

