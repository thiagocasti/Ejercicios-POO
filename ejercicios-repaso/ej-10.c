#include <stdio.h>

int main(void){

    int horas, minutos, segundos, horaSegundos, minutosSegundos, segundosTotales;
    printf("Ingrsese las horas: ");
    scanf("%d", &horas);
    printf("Ingrsese los minutos: ");
    scanf("%d", &minutos);
    printf("Ingrsese los segundos: ");
    scanf("%d", &segundos);

    horaSegundos = (horas * 60) * 60;
    minutosSegundos = minutos * 60;
    segundosTotales = horaSegundos + minutosSegundos + segundos;

    printf("Hora en segundos: %d", segundosTotales);

    return 0;

}