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

void rellenarTablero(int board[SIZE][SIZE]){
    int num_elementos = 20;

    for(int k = 0; k < num_elementos; k++){
        int fila = rand() % SIZE;   
        int col = rand() % SIZE;
        int num = rand() % SIZE + 1;

        while(board[fila][col] != 0){
            fila = rand() % SIZE;
            col = rand() % SIZE;
        }
        board[fila][col] = num;
    }
}


int main(void){     
    srand(time(NULL));

    int board[SIZE][SIZE];

    inicializarTablero(board);

    rellenarTablero(board);

    imprimirTablero(board);

    return 0;
}

