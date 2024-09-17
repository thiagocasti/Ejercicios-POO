package nuevos_ejercicios;

import java.util.Scanner;

public class ejercicios_16 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int intentos = 0;
		String contra1;
		String contra2;
		System.out.println("Ingrese su contraseña : ");
		contra1 = sc.next();
		do {
			System.out.println("Ingrese su contraseña de vuelta: ");
			contra2 = sc.next();
			if(contra2.equals(contra1) ) {
				System.out.println("Enhorabuena!");
				intentos = 3;
			}
			else {
				System.out.println("Incorrecto");
				intentos++;	
			}
		}while(intentos < 3);
		sc.close();
	}
}