package nuevos_ejercicios;

import java.util.Scanner;

public class ejercicios_17 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		String b;
		System.out.println("Ingrese un dia de la semana: ");
		b = sc.next();
		switch(b) {
		case "Sabado":
			System.out.println("No es laboral");
			break;
		case "Domingo":
			System.out.println("No es laboral");
			break;
		case "Lunes":
			System.out.println("Es laboral");
			break;
		case "Martes":
			System.out.println("Es laboral");
			break;
		case "Miercoles":
			System.out.println("Es laboral");
			break;
		case "Jueves":
			System.out.println("Es laboral");
			break;
		case "Viernes":
			System.out.println("Es laboral");
			break;
		default:
			System.out.println("Mensaje no válido");
		}
		sc.close();
	}
}