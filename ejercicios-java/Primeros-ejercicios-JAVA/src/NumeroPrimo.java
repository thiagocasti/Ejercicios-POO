import java.util.Scanner;

public class NumeroPrimo {

    // Función para verificar si un número es primo
    public static boolean esPrimo(int numero) {
        if (numero <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(numero); i++) {
            if (numero % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numero;

        do {
            System.out.print("Ingresa un número: ");
            numero = scanner.nextInt();
        } while (!(numero > 100 && esPrimo(numero)));

        System.out.println("Has ingresado el número " + numero + ", que es mayor a 100 y primo.");
        scanner.close();
    }
}
