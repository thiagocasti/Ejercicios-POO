#include <stdio.h>

int main(void){
    float sumaNota = 0, notaExamen, notaTarea;

    for(int i = 1; i < 5; i++){
        printf("Ingrese la nota del examen %d: ", i);
        scanf("%f",&notaExamen);
        sumaNota += notaExamen;
    }   
    printf("Ingrese la nota de la tarea final: ");
    scanf("%f", &notaTarea);
    sumaNota += notaTarea;

    float notaFinal = sumaNota / 5;

    char *resultado = (notaFinal >= 6) ? "Aprobo\n" : "Desaprobo\n";

    printf("%s", resultado);
    return 0;
}
