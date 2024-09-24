import java.util.Scanner;

public class ejercicio_29 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String frase;
        StringBuilder resultado = new StringBuilder();  // Usamos StringBuilder para concatenar de forma eficiente

        // Bucle para pedir frases al usuario hasta que introduzca una cadena vacía
        do {
            System.out.print("Escribe una frase (o presiona Enter para terminar): ");
            frase = scanner.nextLine();
            
            if (!frase.isEmpty()) {
                resultado.append(frase).append(" ");  // Concatenar la frase con un espacio al final
            }
        } while (!frase.isEmpty());

        // Mostrar el resultado concatenado
        System.out.println("La cadena resultante es: " + resultado.toString().trim());
        
        scanner.close();
    }
}
