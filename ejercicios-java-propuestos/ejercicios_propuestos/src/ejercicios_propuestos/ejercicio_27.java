import java.util.Scanner;

public class ejercicio_27 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numero;
        int contador = 0;

        // Solicitar números al usuario hasta que inserte un -1
        do {
            System.out.print("Introduce un número (o -1 para salir): ");
            numero = scanner.nextInt();

            if (numero != -1) {
                contador++; // Aumentar el contador si no es -1
            }
        } while (numero != -1);
        
        // Muestra el número total de números introducidos (sin contar el -1)
        System.out.println("Has introducido " + contador + " números.");
        
        scanner.close();
    }
}
