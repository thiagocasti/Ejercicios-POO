#include <stdio.h>

int main(void){
    float precioProducto, totalCompra = 0;
    int n;
//bucle infinito
    while(1){
        printf("Ingrese el precio del producto(Ingrese 0 para terminar): ");
        scanf("%f", &precioProducto);

        if(precioProducto <= 0){
            //si es 0 se termina el bucle
            break;
        }
        totalCompra += precioProducto;
    }
    
    float descuentoCompra = totalCompra * 0.15;

    totalCompra = totalCompra - descuentoCompra;
    
    printf("El total de su compra es: %.2f",totalCompra);
}