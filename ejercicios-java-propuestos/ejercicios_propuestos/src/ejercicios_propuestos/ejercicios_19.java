package nuevos_ejercicios;

import java.util.Scanner;

public class ejercicios_19 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int num1;
		int val = 0;
		System.out.println("Ingrese un numero: ");
		num1 = sc.nextInt();
		if(num1 > 0) {
		while(num1 > 0) {
			num1 = num1 / 10;
			val++;
		}
		System.out.println("Las cifras de su numero son: " + val);
		}
		else {
			System.out.println("Ingrese un numero mayor a 0 y positivo :(");
		}
		sc.close();
	}
}