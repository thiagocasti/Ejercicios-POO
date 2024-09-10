package ejercicios_propuestos;
import java.util.Scanner;


public class ej_2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n1;
		int n2;
		
		System.out.println("Ingrese el numero 1: ");
		n1 = sc.nextInt();
		System.out.println("Ingrese el numero 2: ");
		n2 = sc.nextInt();
		
		if(n1 > n2) {
			System.out.println("Numero 1 es mayor a numero 2");
		}
		else if(n2 > n1) {
			System.out.println("Numero 2 es mayor a numero 1");
		}
		else {
			System.out.println("Son iguales");
		}
		sc.close();
	}
}
