#include <stdio.h>

int main(void){
    
    float capitalInvertido, ganancia, gananciaTotal = 0, capitalTotal;
    int meses;

    printf("Ingrese el capital invertido: ");
    scanf("%f", &capitalInvertido);
    printf("Ingrse los meses de su inversion: ");
    scanf("%d", &meses);
    //acumulara en la variable gananciaTotal las ganancias que se iran realizand0 por mes
    for(int i = 0; i < meses; i++){
        ganancia = capitalInvertido * 0.02;
        gananciaTotal += ganancia;
    }
    //suma el capital que ingreso el usuario con las ganancias totales
    capitalTotal = capitalInvertido + gananciaTotal;
    printf("Usted gano: %.2f\nSu capital total es: %.2f\n", gananciaTotal, capitalTotal);
    return 0;
}