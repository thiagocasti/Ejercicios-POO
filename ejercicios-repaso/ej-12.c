#include <stdio.h>

int main(void){
    float sueldoBase, precioVentaMes, precioVentaMesTotal = 0;
    int cantidadVentas;

    printf("Ingrese su sueldo base: ");
    scanf("%f", &sueldoBase);
    printf("Ingrese cantidad de ventas realizadas este mes: ");
    scanf("%d", &cantidadVentas);

    for(int i = 1; i <= cantidadVentas; i++ ){
        printf("Ingese el precio de la venta %d: ", i);
        scanf("%f", &precioVentaMes);
        precioVentaMes = precioVentaMes * 0.10;
        precioVentaMesTotal += precioVentaMes;
    }
    
    float sueldoTotal = sueldoBase + precioVentaMesTotal;

    printf("Su sueldo total es: %.2f \n", sueldoTotal);

    return 0;
}