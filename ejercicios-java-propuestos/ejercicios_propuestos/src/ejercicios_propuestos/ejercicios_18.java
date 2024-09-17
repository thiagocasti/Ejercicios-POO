package nuevos_ejercicios;

import java.util.Scanner;

public class ejercicios_18 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int num1;
		int num2;
		int random;
		int i = 1;
		System.out.println("Ingrese el primer valor: ");
		num1 = sc.nextInt();
		System.out.println("Ingrese el segundo valor: ");
		num2 = sc.nextInt();
		System.out.println("Entre esos numeros, los 10 valores random son: ");
		while(i <= 10) {
			random = num1 + (int)(Math.random()* (num2 - num1 + 1));
			System.out.println("El valor " + i + " Es: " + random);
			i++;
		}
		sc.close();
	}
}