#include <stdio.h>

int main(int argc, char *argv[]){
    int alumnos, costoAlumno, costoTotal, costoViaje;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &alumnos);

    if(alumnos >= 100){
        costoAlumno = 500;
    }else if(alumnos >= 50 && alumnos <= 99){
        costoAlumno = 400;
    }else if(alumnos >= 30 && alumnos <= 49){
        costoAlumno = 300;
    }else{
        costoAlumno = 6000;
    }

    costoTotal = costoAlumno * alumnos;
    costoViaje = costoTotal / alumnos;

    printf("Costo total: %d\n", costoTotal);
    printf("Costo del viaje por alumno: %d\n", costoViaje);

    return 0;
}
