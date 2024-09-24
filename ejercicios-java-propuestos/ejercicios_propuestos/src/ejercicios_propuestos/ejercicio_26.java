import java.util.Scanner;

public class ejercicio_26 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numero;
        
        // Solicitar al usuario un número mayor que 1
        do {
            System.out.print("Introduce un número mayor que 1: ");
            numero = scanner.nextInt();
        } while (numero <= 1);
        
        int suma = 0;
        
        // Realizar la suma del 1 hasta el número indicado
        for (int i = 1; i <= numero; i++) {
            suma += i;
        }
        
        // Muestra el resultado
        System.out.println("La suma de los números de 1 a " + numero + " es: " + suma);
        
        scanner.close();
    }
}
