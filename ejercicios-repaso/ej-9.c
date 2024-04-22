#include <stdio.h>

int main(void) {
    int edad_padre = 50;
    int edad_hijo = 20;
    int años = 0;

    while (edad_padre != edad_hijo * 2) {
        edad_padre++;
        edad_hijo++;
        años++;
    }

    printf("La edad del padre será el doble que la del hijo en %d años.\n", años);

    return 0;
}
