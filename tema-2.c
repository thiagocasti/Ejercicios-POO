/******************************************************************************

Alumno: Thiago Castiñeira
Curso: 5°2°
Fecha: 08/07/2024
Esto fue compilado en: OnlineGDB

*******************************************************************************/
#include <stdio.h>

#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define FILAS 20
#define COLUMNAS 20
#define SEMANAS 4
#define DIAS 7

// Declaración de variables globales
float matriz[4][3];        // Para matriz 4x3
int matriz2[FILAS][COLUMNAS]; // Para matriz 20x20
int ventas[SEMANAS][DIAS];  // Para matriz de ventas 4x7

// Funciones para la matriz 4x3
void crearMatriz(float matriz[4][3]) {
    printf("Ingrese los 12 números para llenar la matriz (4 filas x 3 columnas):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingrese el número para la posición [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

//funcion para dibujar la matriz
void dibujarMatriz(float matriz[4][3]) {
    printf(YELLOW"\nMatriz ingresada:\n"RESET);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}
//calcula la suma de la diagonal, secundaria, principal y ultima
void calcularSumas(float matriz[4][3]) {
    float sumaDiagonalPrincipal = 0.0;
    float sumaDiagonalSecundaria = 0.0;
    float sumaPrimeraUltimaFila = 0.0;
    float sumaPrimeraUltimaColumna = 0.0;
//suma los numeros
    for (int i = 0; i < 4; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalSecundaria += matriz[i][2 - i];
    }

    for (int j = 0; j < 3; j++) {
        sumaPrimeraUltimaFila += matriz[0][j];
        sumaPrimeraUltimaFila += matriz[3][j];
    }

    for (int i = 0; i < 4; i++) {
        sumaPrimeraUltimaColumna += matriz[i][0];
        sumaPrimeraUltimaColumna += matriz[i][2];
    }

    printf(YELLOW"\nResultados:\n"RESET);
    printf("Suma de la diagonal principal: %.2f\n", sumaDiagonalPrincipal);
    printf("Suma de la diagonal secundaria: %.2f\n", sumaDiagonalSecundaria);
    printf("Suma de la primera y última fila: %.2f\n", sumaPrimeraUltimaFila);
    printf("Suma de la primera y última columna: %.2f\n", sumaPrimeraUltimaColumna);
}

// Funciones para la matriz 20x20
void crearMatriz2(int matriz[FILAS][COLUMNAS]) {
    printf("Ingrese los %d*%d números para llenar la matriz (%d filas x %d columnas):\n", FILAS, COLUMNAS, FILAS, COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese el número para la posición [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void dibujarMatriz2(int matriz[FILAS][COLUMNAS]) {
    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirPrimeraColumna2(int matriz[FILAS][COLUMNAS]) {
    printf("\nElementos de la primera columna:\n");
    for (int i = 0; i < FILAS; i++) {
        printf("%d\n", matriz[i][0]);
    }
}

// Funciones para la matriz de ventas 4x7
void crearMatriz3(int ventas[SEMANAS][DIAS]) {
    printf("Ingrese las ventas diarias para cada semana (4 semanas x 7 días):\n");
    for (int i = 0; i < SEMANAS; i++) {
        for (int j = 0; j < DIAS; j++) {
            printf("Semana %d, día %d: ", i + 1, j + 1);
            scanf("%d", &ventas[i][j]);
        }
    }
}

void dibujarMatriz3(int ventas[SEMANAS][DIAS]) {
    printf("\nVentas ingresadas:\n");
    for (int i = 0; i < SEMANAS; i++) {
        for (int j = 0; j < DIAS; j++) {
            printf("%d\t", ventas[i][j]);
        }
        printf("\n");
    }
}

void calcularTotalPorSemana(int ventas[SEMANAS][DIAS]) {
    int totalPorSemana[SEMANAS] = {0};

    for (int i = 0; i < SEMANAS; i++) {
        for (int j = 0; j < DIAS; j++) {
            totalPorSemana[i] += ventas[i][j];
        }
    }

    printf(YELLOW"\nTotal de ventas por semana:\n"RESET);
    for (int i = 0; i < SEMANAS; i++) {
        printf("Semana %d: %d\n", i + 1, totalPorSemana[i]);
    }
}

void calcularPromedioPorSemana(int ventas[SEMANAS][DIAS]) {
    float promedioPorSemana[SEMANAS] = {0};

    for (int i = 0; i < SEMANAS; i++) {
        int totalSemana = 0;
        for (int j = 0; j < DIAS; j++) {
            totalSemana += ventas[i][j];
        }
        promedioPorSemana[i] = (float) totalSemana / DIAS;
    }

    printf(YELLOW"\nPromedio de ventas por semana:\n"RESET);
    for (int i = 0; i < SEMANAS; i++) {
        printf("Semana %d: %.2f\n", i + 1, promedioPorSemana[i]);
    }
}

void encontrarSemanaMayorVenta(int ventas[SEMANAS][DIAS]) {
    int maxVenta = 0;
    int semanaMax = 0;

    for (int i = 0; i < SEMANAS; i++) {
        int totalSemana = 0;
        for (int j = 0; j < DIAS; j++) {
            totalSemana += ventas[i][j];
        }
        if (totalSemana > maxVenta) {
            maxVenta = totalSemana;
            semanaMax = i + 1; // Sumamos 1 para mostrar la semana empezando desde 1
        }
    }

    printf(YELLOW"\nSemana con mayor venta: Semana %d, Total: %d\n"RESET, semanaMax, maxVenta);
}

// Función principal
int main() {
    int opcion;
    int ejercicio;

    printf(YELLOW"Bienvenido! Elija que ejercicio quiere  corregir\n"RESET);

    do {
        // Mostrar menú principal
        printf("\nMenú de opciones:\n");
        printf("1. Ejercicio 1: Operaciones con Matriz 4x3\n");
        printf("2. Ejercicio 2: Operaciones con Matriz 20x20\n");
        printf("3. Ejercicio 3: Tienda Maria Shop - Operaciones con Matriz de Ventas 4x7\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &ejercicio);

        switch (ejercicio) {
            case 1:
                crearMatriz(matriz);
                dibujarMatriz(matriz);
                calcularSumas(matriz);
                break;
            case 2:
                do {
                    // Mostrar menú para matriz 20x20
                    printf("\nMenú de opciones para Matriz 20x20:\n");
                    printf("1. Crear Matriz 20x20\n");
                    printf("2. Dibujar Matriz 20x20\n");
                    printf("3. Imprimir Primera Columna\n");
                    printf("4. Salir al menú principal\n");
                    printf("Seleccione una opción: ");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1:
                            crearMatriz2(matriz2);
                            break;
                        case 2:
                            dibujarMatriz2(matriz2);
                            break;
                        case 3:
                            imprimirPrimeraColumna2(matriz2);
                            break;
                        case 4:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opción no válida. Intente nuevamente.\n");
                            break;
                    }
                } while (opcion != 4);
                break;
            case 3:
                do {
                    // Mostrar menú para matriz de ventas 4x7
                    printf(YELLOW"\nMenú de opciones para Matriz de Ventas 4x7:\n"RESET);
                    printf("1. Crear Matriz de Ventas\n");
                    printf("2. Dibujar Matriz de Ventas\n");
                    printf("3. Calcular Total de Ventas por Semana\n");
                    printf("4. Calcular Promedio de Ventas por Semana\n");
                    printf("5. Encontrar Semana con Mayor Venta\n");
                    printf("6. Salir al menú principal\n");
                    printf("Seleccione una opción: ");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1:
                            crearMatriz3(ventas);
                            break;
                        case 2:
                            dibujarMatriz3(ventas);
                            break;
                        case 3:
                            calcularTotalPorSemana(ventas);
                            break;
                        case 4:
                            calcularPromedioPorSemana(ventas);
                            break;
                        case 5:
                            encontrarSemanaMayorVenta(ventas);
                            break;
                        case 6:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opción no válida. Intente nuevamente.\n");
                            break;
                    }
                } while (opcion != 6);
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
                break;
        }
    } while (ejercicio != 4);

    return 0;
}