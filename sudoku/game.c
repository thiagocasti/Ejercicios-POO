#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

void limpiarTerminal(){
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else 
        system("clear");
    #endif
}

void inicializarTablero(int board[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            board[i][j] = 0;
        }
    }
}

void imprimirTablero(int board[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        if(i % 3 == 0){
            printf("+-------+-------+-------+\n");
        }
        for(int j = 0; j < SIZE; j++){
            if(j % 3 == 0){
                printf("| ");
            }
            if(board[i][j] == 0){
                printf(". ");
            }else{
                printf("%d ", board[i][j]);
            }

        }
        printf("|");
        printf("\n");
    }   
    printf("+-------+-------+-------+\n");
}

void rellenarTablero(int board[SIZE][SIZE], int num_elements) {
    int filled[SIZE * SIZE] = {0}; // Array para registrar celdas llenas
    int filled_count = 0; // Contador de celdas llenas

    for (int k = 0; k < num_elements; k++) {
        int row, col;
        do {
            row = rand() % SIZE;
            col = rand() % SIZE;
        } while (filled[row * SIZE + col]); // Verifica si la celda ya está llena

        int num = (rand() % SIZE) + 1;
        board[row][col] = num;
        filled[row * SIZE + col] = 1; // Marca la celda como llena
        filled_count++;
    }
}


int main(void){     
    srand(time(NULL));

    int board[SIZE][SIZE];

    inicializarTablero(board);
    int num_elements = 20;
    rellenarTablero(board, num_elements);

    imprimirTablero(board);

    return 0;
}

