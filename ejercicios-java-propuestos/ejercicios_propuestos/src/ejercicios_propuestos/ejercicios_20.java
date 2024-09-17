package nuevos_ejercicios;

import java.util.Scanner;

public class ejercicios_20 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int num1;
		System.out.println("Ingrese un numero: ");
		num1 = sc.nextInt();
		
		if(num1 <= 1) {
			System.out.println("Ni a gancho es primo jaja salu3");
		}
		else {
			int raiz = (int)Math.sqrt(num1);
			int cont = 0;
			for(int i = raiz; i > 1; i--) {
				if (num1 % i == 0) {
                    cont++;
                }
			}
		
		if (cont < 1) {
            System.out.println("El numero " + num1 + " es primo");
        } else {
            System.out.println("El numero " + num1 + " no es primo");
        }
		sc.close();
	}
	}
}