#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;
    printf("Bienevenido a este juego del pirata del tesoro! en este juego usted debera\n encontrar un tesoro escondido dentro de un mapa que usted elijira el tamaño, el mismo estara rodeado de agua, debera mover su personaje representado por \xE2\x98\xA0\xEF\xB8\x8F, debera moverlo por alrededor del mapa hasta que encuentre el tesoro, pero cuidado con no caer al agua!\n diviertase y encuentre el tesoro lo mas rapido que pueda!\n\n ");
    srand(time(NULL));
    printf("Elige el alto del mapa, tome en cuenta que el alto es este\n\033[1;33mX\033[0mXX\n\033[1;33mX\033[0mXX\n\033[1;33mX\033[0mXX\nIngrese aqui(tome en cuenta que el valor debes ser mayor a de 3): ");    
    scanf("%d", &filas);
    printf("Elige el largo del mapa, tome en cuenta que el largo del mapa es este\n\033[1;33mXXX\nXXX\nXXX\033[0m \nIngrese aqui(tome en cuenta que el valor debe ser mayor a 3): ");
    scanf("%d", &columnas);

    char *matriz[filas][columnas];

    int randomFila = rand()% (filas - 2) +1;
    int randomColumna = rand() % (columnas - 2) + 1;

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            //verifica los bordes de la matriz
            if(i == 0 || i == filas - 1 || j == 0 || j == columnas - 1){
                matriz[i][j] = "\033[1;34m~~\033[0m\t";
            }else{
                matriz[i][j] = "x\t";
                matriz[randomFila][randomColumna] = "\xE2\x98\xA0\xEF\xB8\x8F\t";
            }
            printf("%s", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
