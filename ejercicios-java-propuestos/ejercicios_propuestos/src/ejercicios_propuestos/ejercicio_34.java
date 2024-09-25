import java.util.Scanner;

public class ejercicio_34 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar una frase al usuario
        System.out.print("Introduce una frase: ");
        String frase = scanner.nextLine();
        
        // Separar la frase en palabras usando split
        String[] palabras = frase.split(" ");
        
        // Mostrar cada palabra por separado
        System.out.println("Las palabras de la frase son:");
        for (String palabra : palabras) {
            System.out.println(palabra);
        }
        
        scanner.close();
    }
}
