import java.util.Scanner;

public class calculadora {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Pedir al usuario el primer número
        System.out.print("Ingresa el primer número: ");
        double numero1 = scanner.nextDouble();
        
        // Pedir al usuario el segundo número
        System.out.print("Ingresa el segundo número: ");
        double numero2 = scanner.nextDouble();
        
        // Pedir al usuario la operación
        System.out.print("Ingresa la operación (+, -, *, /): ");
        char operacion = scanner.next().charAt(0);

        // Variable para almacenar el resultado
        double resultado = 0;
        
        // Realizar la operación según el operador ingresado
        switch (operacion) {
            case '+':
                resultado = numero1 + numero2;
                break;
            case '-':
                resultado = numero1 - numero2;
                break;
            case '*':
                resultado = numero1 * numero2;
                break;
            case '/':
                if (numero2 != 0) {
                    resultado = numero1 / numero2;
                } else {
                    System.out.println("Error: No se puede dividir por cero.");
                    scanner.close();
                    return;
                }
                break;
            default:
                System.out.println("Operación no válida.");
                scanner.close();
                return;
        }

        // Mostrar el resultado
        System.out.println("El resultado es: " + resultado);
        
        scanner.close();
    }
}
