import java.util.Scanner;

public class ejercicio_32 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar la primera palabra
        System.out.print("Introduce la primera palabra: ");
        String palabra1 = scanner.nextLine();
        
        // Solicitar la segunda palabra
        System.out.print("Introduce la segunda palabra: ");
        String palabra2 = scanner.nextLine();
        
        // Comparar si las palabras son iguales
        if (palabra1.equals(palabra2)) {
            System.out.println("Las palabras son iguales.");
        } else {
            System.out.println("Las palabras son diferentes.");
        }
        
        scanner.close();
    }
}
