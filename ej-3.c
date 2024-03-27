#include <stdio.h>

int main(int argc, char *argv[]){
    //es un float por si la nota es decimal
    float notaParcial, notaTotalParcial, notaExamen, notaTrabajo, notaFinal;
    //el usuario ingresa las 3 notas del parcial (es 4 para que el usuario se pueda guiar)
    for(int i = 1; i < 4; i++){
        printf("Ingrese la nota del parcial numero %d: ", i);
        scanf("%f", &notaParcial);
        notaTotalParcial += notaParcial;
    }
    //saca el promedio de la nota de los parciales
    notaTotalParcial = notaTotalParcial / 3;
    //saca el 55% de la nota
    notaTotalParcial = notaTotalParcial * 0.55;
    printf("Ingrese la nota del Examen final:");
    scanf("%f", &notaExamen);
    //saca el 30% de la nota del examen
    notaExamen = notaExamen * 0.3;
    printf("Ingrese la nota del del trabajo final:");
    scanf("%f", &notaTrabajo);
    //saca el 15% de la nota del trabajo
    notaTrabajo = notaTrabajo * 0.15;
    //suma las variables finales
    notaFinal = notaTotalParcial + notaExamen + notaTrabajo;

    printf("Su nota final es: %.2f", notaFinal);
    
    return 0;

}