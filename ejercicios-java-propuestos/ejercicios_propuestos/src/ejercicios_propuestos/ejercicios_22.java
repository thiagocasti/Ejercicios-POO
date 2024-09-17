package nuevos_ejercicios;

import java.util.Scanner;


public class ejercicios_22 {
	public static boolean esPrimo(int numero) {
	    if (numero <= 1) {
	        return false;
	    }
	    for (int i = 2; i <= Math.sqrt(numero); i++) {
	        if (numero % i == 0) {
	            return false;
	        }
	    }
	    return true;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		for (int i = 1; i <= 100; i++) {
            if (esPrimo(i)) {
                System.out.println(i);
            }
            
		sc.close();
		}
	}
}
