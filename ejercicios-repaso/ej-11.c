    #include <stdio.h>

int main(void){
    float notaEvaluacion, notaEvaluacionTotal = 0, notaTrabajo, notaPromedio, notaFinal;

    for(int i = 1; i <= 3; i++){
        printf("Ingrese la nota de la evalucacion %d: ", i);
        scanf("%f", &notaEvaluacion);  
        notaEvaluacionTotal += notaEvaluacion;
    }
    printf("Ingrese la nota del trabajo final: ");
    scanf("%f", &notaTrabajo);
    
    notaEvaluacionTotal = notaEvaluacionTotal / 3;
    notaPromedio = notaEvaluacionTotal;
    notaEvaluacionTotal = notaEvaluacionTotal * 0.55;
    notaTrabajo = notaTrabajo * 0.15;

    notaFinal = notaEvaluacionTotal + notaTrabajo + notaPromedio * 0.30;

    printf("la nota final es: %.2f\n", notaFinal);
    return 0;

}