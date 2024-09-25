import java.util.Scanner;

public class ExtraerLetras {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar una cadena al usuario
        System.out.print("Introduce una cadena (debe tener al menos 5 caracteres): ");
        String cadena = scanner.nextLine();
        
        // Verificar que la cadena tenga al menos 5 caracteres
        if (cadena.length() >= 5) {
            // Extraer la cuarta y quinta letra usando substring
            String subcadena = cadena.substring(3, 5); // La posición 3 es la cuarta letra y la posición 5 no se incluye
            System.out.println("La cuarta y quinta letra son: " + subcadena);
        } else {
            System.out.println("La cadena es demasiado corta.");
        }
        
        scanner.close();
    }
}
