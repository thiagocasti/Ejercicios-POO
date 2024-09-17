package ejercicios_propuestos;

import java.util.Scanner;

public class ej_15 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		double a;
		do {
			System.out.println("Ingrese un numero mayor a cero: ");
			a = sc.nextDouble();
		}
		while(a <= 0);
		sc.close();
	}
}
