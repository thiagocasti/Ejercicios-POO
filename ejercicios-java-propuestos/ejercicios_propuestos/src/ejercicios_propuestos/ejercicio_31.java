import java.util.Scanner;

public class ejercicio_31 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar al usuario una cadena
        System.out.print("Introduce una cadena: ");
        String cadena = scanner.nextLine();
        
        // Mostrar la longitud de la cadena
        int longitud = cadena.length();
        System.out.println("La longitud de la cadena es: " + longitud);
        
        scanner.close();
    }
}
