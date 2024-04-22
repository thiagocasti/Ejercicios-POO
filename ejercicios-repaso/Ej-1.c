#include <stdio.h>

int main(void){
    int numeros, suma = 0;

    for(int i = 1; i < 4; i++){
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numeros);
        suma += numeros;
    }

    char *resultado = (suma == 87) ? "La suma da 87" : "La suma no da 87";

    printf("%s\n", resultado);
    return 0;
}