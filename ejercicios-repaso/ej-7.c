#include <stdio.h>

int main(void){
    int hora, minuto;

    printf("Ingrese la hora: ");
    scanf("%d",&hora);
    printf("Ingrese los minutos: ");
    scanf("%d", &minuto);
    
    int horaFinal = (hora > 12) ? (hora - 12) : hora;
    const char *horaPeriodo = (hora >= 12) ? "pm\n" : "am\n";

    printf("%d:%d %s", horaFinal, minuto, horaPeriodo);

    return 0;
}