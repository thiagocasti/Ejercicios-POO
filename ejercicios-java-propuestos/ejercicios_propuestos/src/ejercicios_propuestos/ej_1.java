package ejercicios_propuestos;
import java.util.Scanner;

public class ej_1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n1;
		int n2;
		
		System.out.println("Ingrese el numero 1: ");
		n1 = sc.nextInt();
		System.out.println("Ingrese el numero 2: ");
		n2 = sc.nextInt();		
		
		System.out.println("La suma: "+ (n1 + n2));
		System.out.println("La resta: "+ (n1 - n2));
		System.out.println("La multiplicación: "+ (n1 * n2));
		System.out.println("La división: "+ (n1 / n2));
		
		sc.close();
	}
}
