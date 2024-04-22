#include <stdio.h>

int main(void) {
    float nota;

    printf("Ingrese su nota: ");
    scanf("%f", &nota);
    const char *mensajes[] = {"Desaprobado", "Aprobado", "Aprobado, Felicitaciones!"};

    //calcula que mensaje dar segun la nota
    int indiceAprobacion = nota >= 8 ? 2 :  (nota < 6 ? 0 : 1);

    printf("%s\n", mensajes[indiceAprobacion]);

    if(nota == 1){
        printf("Debera esforsarse mas");
    }
        return 0;
}
