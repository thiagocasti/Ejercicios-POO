package ejercicios_propuestos;

import java.util.Scanner;

public class ej_13 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int ven = sc.nextInt();
		int suma = 0;
		if(ven > 0) {
			for(int precio = 1; precio <= ven; precio++) {
				System.out.println("Ingrese el precio de la venta numero " + precio + "\n");
				int precio1 = sc.nextInt();
				suma += precio1;
				
			}
			System.out.println("La suma de todos los productos que se deseo es de: " + suma);
		}
		else {
			System.out.println("Introduzca una venta mayor a cero\n");
		}	
		sc.close();
	}
}
