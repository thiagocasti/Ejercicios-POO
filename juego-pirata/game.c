#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpiarTerminal() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

void inicializarMapa(int filas, int columnas, char *mapa[filas][columnas], int *posicionFila, int *posicionColumna, int *posicionTesoroFila, int *posicionTesoroColumna);
void imprimirMapa(int filas, int columnas, char *mapa[filas][columnas]);
void BuscarTesoro(int filas, int columnas, char *mapa[filas][columnas], int inicialFila, int inicialColumna, int tesoroFila, int tesoroColumna);

int main() {
    int filas, columnas;

    printf("Bienvenido a este juego del pirata del tesoro! en este juego usted debera\n encontrar un tesoro escondido dentro de un mapa que usted elijira el tamaño, el mismo estara rodeado de agua, debera mover su personaje representado por \xE2\x98\xA0\xEF\xB8\x8F, debera moverlo por alrededor del mapa hasta que encuentre el tesoro, pero cuidado con no caer al agua!\n diviertase y encuentre el tesoro lo mas rapido que pueda!\n\n ");
    srand(time(NULL));
    printf("Elige el alto del mapa, tome en cuenta que el alto es este\n\033[1;33mX\033[0mXX\n\033[1;33mX\033[0mXX\n\033[1;33mX\033[0mXX\nIngrese aqui(tome en cuenta que el valor debes ser mayor a de 4): ");    
    scanf("%d", &filas);
    printf("Elige el largo del mapa, tome en cuenta que el largo del mapa es este\n\033[1;33mXXX\nXXX\nXXX\033[0m \nIngrese aqui(tome en cuenta que el valor debe ser mayor a 4): ");
    scanf("%d", &columnas);

    if(filas <= 3 && columnas <= 3){
        printf("\nIngrese un numero mas alto de filas y columnas\n");
        return 1;
    }else if(filas > 18 && columnas > 18){
        printf("\nIngrese un numero menor\n");
        return 1;
    }


    char *mapa[filas][columnas];
    int posicionFila, posicionColumna, posicionTesoroFila, posicionTesoroColumna;
    inicializarMapa(filas, columnas, mapa, &posicionFila, &posicionColumna, &posicionTesoroFila, &posicionTesoroColumna);       
    BuscarTesoro(filas, columnas, mapa, posicionFila, posicionColumna, posicionTesoroFila, posicionTesoroColumna);
    return 0;
}

void inicializarMapa(int filas, int columnas, char *mapa[filas][columnas], int *posicionFila, int *posicionColumna, int *posicionTesoroFila, int *posicionTesoroColumna) {
    int randomFila = rand() % (filas - 2) + 1;
    int randomColumna = rand() % (columnas - 2) + 1;
    
    // Genera aleatoriamente la posición del tesoro
    do {
        *posicionTesoroFila = rand() % (filas - 2) + 1;
        *posicionTesoroColumna = rand() % (columnas - 2) + 1;
    } while ((*posicionTesoroFila == randomFila && *posicionTesoroColumna == randomColumna) || (*posicionTesoroFila == 0 || *posicionTesoroColumna == 0 || *posicionTesoroFila == filas - 1 || *posicionTesoroColumna == columnas - 1));

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            // Verifica los bordes de la matriz
            if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1) {
                mapa[i][j] = "\033[1;34m~~\033[0m\t";
            } else {
                mapa[i][j] = "x\t";
            }
        }
    }

    // Coloca al personaje y al tesoro en la matriz
    mapa[randomFila][randomColumna] = "\xE2\x98\xA0\xEF\xB8\x8F\t";
    mapa[*posicionTesoroFila][*posicionTesoroColumna] = "x\t";
    
    *posicionFila = randomFila;
    *posicionColumna = randomColumna;
}

void imprimirMapa(int filas, int columnas, char *mapa[filas][columnas]) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("%s", mapa[i][j]);
        }
        printf("\n");
    }   
}

void BuscarTesoro(int filas, int columnas, char *mapa[filas][columnas], int inicialFila, int inicialColumna, int posicionTesoroFila, int posicionTesoroColumna) {
    int movimientos = 0;
    int filaActual = inicialFila;
    int columnaActual = inicialColumna;
    char direccion;

    while (movimientos < 50) {
        limpiarTerminal();
        imprimirMapa(filas, columnas, mapa);
        printf("Movimientos restantes: %d\n", 50 - movimientos);
        printf("Ingrese la direccion (w, a, s, d): ");
        scanf(" %c", &direccion);
        
        //limpia la anterior zona del jugador
        mapa[filaActual][columnaActual] = "x\t";

        //la posicion del pirata segun la direccion ingresada
        if (direccion == 'w' && filaActual > 1) {
            filaActual--;
        } else if (direccion == 's' && filaActual < filas - 2) {
            filaActual++;
        } else if (direccion == 'd' && columnaActual < columnas - 2) {
            columnaActual++;
        } else if (direccion == 'a' && columnaActual > 1) {
            columnaActual--;
        } else {
            printf("Movimiento no valido, intente de nuevo.\n");
        }
        //vuelve a imprimir 
        mapa[filaActual][columnaActual] = "\xE2\x98\xA0\xEF\xB8\x8F\t";
        
        // si el pirata ha encontrado el tesoro
        if (filaActual == posicionTesoroFila && columnaActual == posicionTesoroColumna) {
            limpiarTerminal();
            imprimirMapa(filas, columnas, mapa);
            printf("Felicidades ¡Has encontrado el tesoro!\n");
            return;
        }

        movimientos++;
    }

    limpiarTerminal();
    imprimirMapa(filas, columnas, mapa);
    printf("Has alcanzado el limite de 50 movimientos. Mejor suerte la próxima vez\n");
}
