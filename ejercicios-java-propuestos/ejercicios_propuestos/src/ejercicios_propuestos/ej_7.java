package ejercicios_propuestos;

import java.util.Scanner;

public class ej_7 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		
		System.out.println("Ingrese un numero: ");
		n = sc.nextInt();		
		char ch = (char) n;
		
		System.out.println("El numero en ASCII es: "+ch);
		sc.close();
	}
}
