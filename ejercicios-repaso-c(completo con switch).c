#include <stdio.h>
#include <stdlib.h>

void print_menu() {
  puts(" ejercicio 1 \n");
  puts(" ejercicio 2 \n");
  puts(" ejercicio 3 \n ");
  puts(" ejercicio 4 \n ");
  puts(" ejercicio 5 \n ");
  puts(" Salir (ponga 6)\n ");
}

int main(void) {
  while(1) {
  system("clear");
  print_menu();
  int opcion;
  scanf("%d", &opcion);
  getchar();
  switch (opcion) {
case 1:
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
      break;
case 2:
    float sueldoBase, ventas, totalVentas = 0, comision;

    printf("Ingrese su sueldo base: ");
    scanf("%f", &sueldoBase);

    for(int i = 1; i < 4; i++){
        printf("Ingrese la venta numero %d: ", i);
        scanf("%f", &ventas);
        totalVentas += ventas;
    }

    comision = totalVentas * 0.1;

    float salarioTotal = sueldoBase + comision;

    printf("Comision: %.2f\n", comision);
    printf("Salario total del vendedor: %.2f\n", salarioTotal);

    return 0;
      break;
case 3:
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
      break;
case 4:
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    //verifica el numero mas chico y se lo asigna a la variable inicio
    int inicio = (num1 < num2) ? num1 : num2;
    int fin = (num1 > num2) ? num1 : num2;

    //El proceso se inicializa en el numero mas chico y termina en el numero mas grande
    for(int i = inicio; i <= fin; i++){
        //imprime el numero siempre y cuando su resto de 0
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    

    return 0;

    
      break;
case 5:

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
    return 0;
    break;
case 6:
      puts("Saliendo...");
      return 0;
default:
      puts("No conozco esa opcion");
      break;
}
  getchar();
  }
  return 0;
}