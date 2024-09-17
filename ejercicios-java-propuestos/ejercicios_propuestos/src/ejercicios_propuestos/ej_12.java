package ejercicios_propuestos;

import java.util.Scanner;

public class ej_12 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		System.out.println("Introduzca un numero: ");
		for(int num = 1; num <= 100; num++) {
			if(num % 2 == 0 && num % 3 == 0) {
				System.out.println(num);
			}

		}		
		sc.close();
	}
}
