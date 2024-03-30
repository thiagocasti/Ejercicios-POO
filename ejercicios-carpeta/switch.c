#include <stdio.h>
#include <stdlib.h>

void print_menu() {
    puts("1. Determina si un número es positivo o negativo");
    puts("2. Determina si un número es par o impar");
    puts("3. Determina si un número es múltiplo de 2, de 3 o de ambos");
    puts("4. Determina el mayor de tres números");
    puts("5. Salir");
    puts("Seleccione una opción: ");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Ingrese numeros en la linea de comandos de esta forma: %s 50 50 50(ejemplo)\n", argv[0]);
        return 1;
    }

    while(1) {
        system("clear");
        print_menu();
        int opcion;
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
            case 1: {
                int numPos = atoi(argv[1]);
                char *esPositivo = (numPos >= 0) ? "Es positivo\n" : "es negativo\n";
                printf("%s", esPositivo);
                break;
            }
            case 2: {
                int numPar = atoi(argv[1]);
                char *esPar = (numPar % 2 == 0) ? "es par\n" : "es impar\n";
                printf("%s", esPar);
                break;
            }
            case 3: {
                int numMultiplo = atoi(argv[1]);
                char *esMultiplo = (numMultiplo % 2 == 0 && numMultiplo % 3 == 0) ? "es multiplo de 2 y de 3\n" : (numMultiplo % 2 == 0) ? "Es multiplo de 2\n" : (numMultiplo % 3 == 0) ? "Es multpilo de 3\n" : "no es multiplo ni de 2 ni de 3\n";
                printf("%s", esMultiplo);
                break;
            }
            case 4: {
                if (argc < 4) {
                    printf("Uso: %s <arg1> <arg2> <arg3>\n", argv[0]);
                    break;
                }
                int n1 = atoi(argv[1]);
                int n2 = atoi(argv[2]);
                int n3 = atoi(argv[3]);
                char *esMayor = (n1 == n2 && n1 == n3) ? "Son iguales" : (n1 > n2 && n1 > n3) ? "El primer numero es el mayor" : (n2 > n3) ? "El segundo numero es el mayor" : "El tercer numero es el mayor";
                printf("%s", esMayor);
                break;
            }
            case 5:
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
