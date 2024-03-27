#include <stdio.h>

int main(int argc, char *argv[]){
    int distanciaInicial1, distanciaInicial2, distanciaTotal;
    //incializo la velocidad total en 0 para asegurarnos que la suma va a ser correcta
    float velocidad, velocidadTotal = 0, puntoEncuentro, tiempoEncuentro;
    distanciaInicial1 = 70;
    distanciaInicial2 = 150;

    distanciaTotal = distanciaInicial2 - distanciaInicial1;

    for(int i = 1; i <= 2; i++){
        printf("Ingrese la velocidad del vehiculo numero %d: ", i);
        scanf("%f", &velocidad);
        velocidadTotal += velocidad;
    }

    tiempoEncuentro = distanciaTotal / velocidadTotal;
    //sumo la distancia inicial del primero para considerar la carretera en su totalidad
    puntoEncuentro = velocidadTotal * tiempoEncuentro + distanciaInicial1;

    printf("se van a enontrar a los %.2fkm\n", puntoEncuentro);

}