import java.util.Scanner;

public class ejercicio_28 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicita al usuario una frase
        System.out.print("Introduce una frase: ");
        String frase = scanner.nextLine();
        
        // Elimina los espacios de la frase
        String fraseSinEspacios = frase.replace(" ", "");
        
        // Muestra la frase sin espacios
        System.out.println("Frase sin espacios: " + fraseSinEspacios);
        
        scanner.close();
    }
}
