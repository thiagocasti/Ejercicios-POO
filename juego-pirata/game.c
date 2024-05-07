#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 5
#define COLUMNAS 5

// Función para imprimir la matriz
void imprimirMatriz(int matriz[FILAS][COLUMNAS], int filaPersonaje, int colPersonaje) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            //Esto
            if (i == filaPersonaje && j == colPersonaje) {
                printf("P "); // Caracter para representar al personaje
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    // Semilla para generar números aleatorios
    srand(time(NULL));

    // Declarar la matriz
    int matriz[FILAS][COLUMNAS];

    // Llenar la matriz con números aleatorios
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 100; // Genera números aleatorios entre 0 y 99
        }
    }

    // Posición inicial del personaje
    int filaPersonaje = 0;
    int colPersonaje = 0;

    // Imprimir la matriz con el personaje en su posición inicial
    imprimirMatriz(matriz, filaPersonaje, colPersonaje);

    // Mover el personaje dentro de la matriz

    return 0;
}
