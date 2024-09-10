package ejercicios_propuestos;

import java.util.Scanner;

public class ej_5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double radio;
	
		System.out.println("Ingrese el radio del circulo: ");
		radio = sc.nextInt();
	
		double area = Math.PI * Math.pow(radio, 2);
		
		System.out.println("El area del circulo es: "+ area);
		
		sc.close();
	}
}
