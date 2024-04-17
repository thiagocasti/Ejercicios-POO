#include <stdio.h>
#include <math.h>

int main(void){
    int catetoOpuesto, catetoAdyacente, hipotenusa;

    prinf("Ingrese el cateto opuesto: ");
    scanf("%d", &catetoOpuesto);
    printf("Ingrese el cateto adyacente: ");
    scanf("%d", &catetoAdyacente);
    printf("Ingrese la hipotenusa: ");
    scanf("%d", &hipotenusa);

    int resultadoOpuesto =  sqrt(pow(hipotenusa, 2) - pow(catetoAdyacente, 2));
    int resultadoAdyacente=  sqrt(pow(hipotenusa, 2) - pow(catetoOpuesto, 2));
    int resultadoHipotenusa =  sqrt(pow(catetoOpuesto, 2) + pow(catetoAdyacente, 2));
    
    printf("Lado cateto opuesto: %d\n Lado cateto adyacente: %d\n Lado hipotenusa: %d", resultadoOpuesto, resultadoAdyacente, resultadoHipotenusa);

    return 0;
}