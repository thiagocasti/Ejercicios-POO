#include <stdio.h>

int main(void){
    float alquiler;

    printf("Ingrese su alquiler: ");
    scanf("%f", &alquiler);
    //mensajes segun lo que el usuario vaya a pagar a de impuestos
    char *aPagar[] = {"no paga impuestos", "paga 5%", "paga 10%", "paga 15%", "paga 25%"};
    float impuestos[] = {0, 0.05, 0.10, 0.15, 0.25}; 
    int indiceImpuesto = (alquiler <= 202) ? 0 : 
                         (alquiler <= 607) ? 1 : 
                         (alquiler <= 1013) ? 2 : 
                         (alquiler <= 1418) ? 3 : 4;
    //calcula que impuestos va a pagar
    float coneceptoAlquiler = alquiler * impuestos[indiceImpuesto];
    //calcula el precio del alquiler final
    float alquilerFinal = alquiler + coneceptoAlquiler;
    printf("%s\nUsted de impuestos paga: %.2f, su alquiler final es %.2f\n", aPagar[indiceImpuesto], coneceptoAlquiler, alquilerFinal);
    return 0;
}