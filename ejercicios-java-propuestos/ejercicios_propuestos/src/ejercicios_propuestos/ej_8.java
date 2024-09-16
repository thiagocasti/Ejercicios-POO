package ejercicios_propuestos;

import java.util.Scanner;

public class ej_8 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String text;
		
		System.out.println("Ingrese un caracter: ");
		char caracter = sc.next().charAt(0);
		int codigo = (int) caracter;

		System.out.println("El numero en ASCII es: "+codigo);
		sc.close();
	}
}
