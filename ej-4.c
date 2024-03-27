#include <stdio.h>

int main(int argc, char *argv[]){

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

}