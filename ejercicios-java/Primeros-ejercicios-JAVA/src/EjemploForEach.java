public class EjemploForEach {
    public static void main(String[] args) {
        // Definimos un arreglo de números enteros
        int[] numeros = {10, 20, 30, 40, 50};
        
        // Variable para almacenar la suma de los números
        int suma = 0;

        // Bucle for-each para recorrer el arreglo
        // El bucle va iterando sobre cada elemento del arreglo "numeros"
        // La variable "numero" tomará el valor de cada elemento del arreglo en cada iteración
        for (int numero : numeros) {
            // Sumamos cada número al acumulador "suma"
            suma += numero;
        }

        // Imprimimos el resultado de la suma
        System.out.println("La suma de los números es: " + suma);
    }
}
