package ejercicios_propuestos;

import java.util.Scanner;

public class ej_10 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i = 0;
		do {
			for(i = 0; i <= 100; i++) {
				System.out.println(i);		
			}
		}while(i <= 100);
		sc.close();
	}
}
