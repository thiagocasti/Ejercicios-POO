#include <stdio.h>

int main(void){
    int alumnosHombres, alumnasMujeres;

    printf("Ingrese la cantidad de alumnos hombres: ");
    scanf("%d", &alumnosHombres);
    printf("Ingrese la cantidad de alumnas mujeres: ");
    scanf("%d", &   alumnasMujeres);
    int cantidadDeAlumnosTotal = alumnosHombres + alumnasMujeres;
    if(cantidadDeAlumnosTotal <= 0){
        printf("ERROR: la cantidad de alumnos no puede ser igual o menor a cero\n");
        return 0;
    }
    float porcentajeHombre = ((float)alumnosHombres / cantidadDeAlumnosTotal) * 100;
    float porcentajeMujeres = ((float)alumnasMujeres / cantidadDeAlumnosTotal) * 100;

    printf("El porcentaje total de hombres es: %.2f\n", porcentajeHombre);
    printf("El porcentaje total de mujeres es: %.2f\n", porcentajeMujeres);
    return 0;
}