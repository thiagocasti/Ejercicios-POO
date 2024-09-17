package ejercicios_propuestos;

import java.util.Scanner;

public class ej_14 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		System.out.println("Ingrese el valor de la variable a: ");
		double a = sc.nextDouble();
		System.out.println("Ingrese el valor de la variable b: ");
		double b = sc.nextDouble();
		System.out.println("Ingrese el valor de la variable c: ");
		double c = sc.nextDouble();
		double raiza = Math.sqrt(a);
		double raizb = Math.sqrt(b);
		double raizc = Math.sqrt(c);
		double discriminante = b * b - 4 * a * c;
		if(discriminante <= 0) {
			System.out.println("No es posible :(\n");
		}
		else {
		double raiz4pos = - b + Math.sqrt(discriminante) / 2 * a;
		double raiz4neg = - b - Math.sqrt(discriminante) / 2 * a;
		System.out.println("Quiere el resultado positivo o negativo?: (1)Positivo, (2)Negativo:\n");
		int opcion = sc.nextInt();
		if(opcion == 1) {
			System.out.println("Su resultado es: " + raiz4pos);
		}
		else if(opcion == 2) {
			System.out.println("Su resultado es: " + raiz4neg);
		}
		else {
			System.out.println("Ingrese un valor pedido >:v");
		}
		}
		sc.close();
	}
}
