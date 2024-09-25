import java.util.Scanner;

public class ConvertirFrase {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicita al usuario una frase
        System.out.print("Introduce una frase: ");
        String frase = scanner.nextLine();
        
        // Solicita al usuario qué operación quiere realizar
        System.out.println("Elige una opción:");
        System.out.println("1 - Convertir a mayúsculas");
        System.out.println("2 - Convertir a minúsculas");
        int opcion = scanner.nextInt();
        
        // Convierte la frase según la opción seleccionada
        switch (opcion) {
            case 1:
                System.out.println("Frase en mayúsculas: " + frase.toUpperCase());
                break;
            case 2:
                System.out.println("Frase en minúsculas: " + frase.toLowerCase());
                break;
            default:
                System.out.println("Opción no válida.");
        }
        
        scanner.close();
    }
}
