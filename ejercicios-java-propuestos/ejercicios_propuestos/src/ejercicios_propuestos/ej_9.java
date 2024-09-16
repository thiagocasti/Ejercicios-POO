package ejercicios_propuestos;

import java.util.Scanner;

public class ej_9 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int price;
		
		System.out.println("Ingrese el precio de un producto: ");
		price = sc.nextInt();
		
		double final_price = ((price * 21) / 100) + price;
		
		System.out.println("El precio con iva es: "+final_price);
		sc.close();
	}
}
