#include  "stdlib.h"
#include  "stdio.h"
#include  "time.h"
#include  "conio.h"
#include  "string.h"

int main(void){
    int number;
    printf("Bienvenido al programa! En este le permitira verificar la conjetura de collatz.\n");
    printf("Ingrese un numero mayor a 1\n");
    printf("Ingrese el numero: ");
    scanf("%d", &number);
    printf("%d", number);
    if(number <= 1){
        printf("El numero debe ser mayor a 1");
        return 0;
    }
    while(number != 1){
        int collatzFunction = (number % 2 == 0) ? number / 2 : (number*3)+1;
        printf(", %d", collatzFunction);
        /*Esto es por que si no se actualiza la variable number, el valor siempre sera el mismo y 
        por lo tanto, sera un bucle infinito*/
        number = collatzFunction;
    }
    
    
    getch();

    
    return 0;
}