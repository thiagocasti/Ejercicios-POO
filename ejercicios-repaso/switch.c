#include <stdio.h>
#include <stdlib.h>

void print_menu(){
    puts("ejercicio 1(para elegir debera escribir el numero del ejercicio");
    puts("ejercicio 2");
    puts("Salir(escriba 3)\n");
}

int main(void){
    while(1){
        system("clear");
        print_menu();
        int opcion;
        scanf("%d", &opcion);
        getchar();
        switch (opcion)
        {
        case 1:
             int numeros, suma1 = 0;

    for(int i = 1; i < 4; i++){
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numeros);
        suma1 += numeros;
    }

    char *resultado = (suma1 == 87) ? "La suma da 87" : "La suma no da 87";

    printf("%s\n", resultado);
    return 0;
            break;
        case 2:
         float numero, suma2 = 0;

    for(int i = 1; i < 4; i++){
        printf("Ingrese el numero %d: ", i);
        scanf("%f", &numero);
        suma2 += numero;
    }
    
    float promedio = suma2 / 3;

    printf("El promedio es: %.2f\n", promedio);   
    return 0;
        break;
        case 3:
        return 0;
        break;
        default:
            puts("no conozco esa opcion");
            break;
        }
        getchar();
    }
    return 0;
}