#include <stdio.h>

int main(void){
    float numero, suma = 0;

    for(int i = 1; i < 4; i++){
        printf("Ingrese el numero %d: ", i);
        scanf("%f", &numero);
        suma += numero;
    }
    
    float promedio = suma / 3;

    printf("El promedio es: %.2f\n", promedio);   
    return 0;
}