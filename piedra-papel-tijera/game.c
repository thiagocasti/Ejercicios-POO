#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    char *elecciones[] = {"no puede ser 0", "piedra", "papel", "tijera"};
    int userOption;
    int puntosComputadora = 0;
    int puntosUsuario = 0;
    printf("Hola! este es un juego de piedra papel o tijera.\n Este juego consiste en competir contra un bot (su computadora) en 5 rondas donde va a tener 3 jugadas en cada una.\n Se le sumara un punto a usted cada vez que elija la opcion correcta, si  la maquina elijio correctamente se le sumara un punto a la maquina.\n Consiga la mayor cantidad de puntos y compita contra la aleatoridad de su computadora!\n\n");
    srand(time(NULL));

/*bucle de rondas*/
    for(int i = 1; i <= 5; i++){ 
        //bucle juegada
        for(int j = 1; j <= 3; j++){
        //dice las rondas y elije el usuario
                printf("\033[1;33m\nRonda: %d Jugada: %d\n\033[0m", i, j);
                printf("Elija a que le juega(Ingrese 1 para piedra, 2 para papel y 3 para tijera): ");
                scanf("%d", &userOption);
                //opcion que puede llegar a elegir la computadora(es + 1 para que vaya en un rango de 1 a 3)
                int computerElection = rand() % 3 + 1;
                //elije la computadora
                printf("\nla computadora eligio: %s\n", elecciones[computerElection]);
                //codicional para ver quien gano, perdio o empato
                if(computerElection == userOption){
                     printf("Usted empato!\n");
                //La maxima de variables que puede tener para ganar el jugador 1
                }else if((userOption == 1 && computerElection == 3) ||
                (userOption == 2 && computerElection == 1) ||
                (userOption == 3 && computerElection == 2)){
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
        //programa decide quien gano
        char *quienGano = (puntosUsuario == puntosComputadora) ? "\033[0;32m\nHan empatado!\n" : (puntosUsuario > puntosComputadora) ? "\033[0;32m\nGanaste la partida!\n" : "\033[0;31m\nLa computadora gano la partida!\n";
        //imrpime desicion final
        printf("%s", quienGano);
            return 0;
    }

   

