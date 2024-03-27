#include <stdio.h>

int main(int argc, char *argv[]){
    float sueldoBase, ventas, totalVentas = 0, comision;

    printf("Ingrese su sueldo base: ");
    scanf("%f", &sueldoBase);

    for(int i = 1; i < 4; i++){
        printf("Ingrese la venta numero %d: ", i);
        scanf("%f", &ventas);
        totalVentas += ventas;
    }

    comision = totalVentas * 0.1;

    float salarioTotal = sueldoBase + comision;

    printf("Comision: %.2f\n", comision);
    printf("Salario total del vendedor: %.2f\n", salarioTotal);

    return 0;
}