#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define URL "https://dolarapi.com/v1/dolares/blue"

// Función para manejar la respuesta del servidor
size_t write_callback(void *ptr, size_t size, size_t nmemb, char *data) {
    // Copia los datos recibidos a la cadena 'data'
    strncpy(data, ptr, size * nmemb);
    return size * nmemb;
}

// Función para buscar una cadena dentro de otra cadena
char *find_substring(const char *haystack, const char *needle) {
    char *ptr = strstr(haystack, needle);
    return ptr;
}

int main() {
    float pesos;
    // Ejecutar el comando curl para obtener los datos JSON de la URL
    system("curl -s 'https://dolarapi.com/v1/dolares/blue' > datos.json");

    // Abrir el archivo datos.json
    FILE *fp = fopen("datos.json", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error al abrir el archivo\n");
        return 1;
    }

    // Leer y almacenar el contenido del archivo JSON
    char data[4096];
    size_t read_bytes = fread(data, 1, sizeof(data), fp);
    data[read_bytes] = '\0'; // Asegurarse de que la cadena esté terminada correctamente
    fclose(fp);

    // Buscar la cadena "venta" en el JSON
    char *ptr_venta = find_substring(data, "\"venta\":");
    if (ptr_venta == NULL) {
        fprintf(stderr, "No se encontró el valor de venta\n");
        return 1;
    }

    // Avanzar el puntero para obtener el valor de venta
    ptr_venta += strlen("\"venta\":");

    // Encontrar el final del valor de venta
    char *ptr_fin_venta = strchr(ptr_venta, ',');
    if (ptr_fin_venta == NULL) {
        fprintf(stderr, "Error al encontrar el final del valor de venta\n");
        return 1;
    }

    // Copiar el valor de venta en una variable
    int venta = atoi(ptr_venta);

    // Imprimir el valor de venta del dólar y la conversion
    printf("Ingrese la cantidad de pesos: ");
    scanf("%f", &pesos);
    float valorDolar = pesos / venta;
    printf("El valor en dolares es: %.2f\n", valorDolar);
    printf("Valor de venta del dólar: %d\n", venta);
    

    return 0;
}
