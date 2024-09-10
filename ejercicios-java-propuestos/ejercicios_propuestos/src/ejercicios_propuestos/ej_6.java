	package ejercicios_propuestos;

	import java.util.Scanner;

	public class ej_6 {
		public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			
			int numero;
			
			System.out.println("Ingrese un numero para saber si es divisible: ");
			numero = sc.nextInt();
			
			if(numero % 2 == 0)
			{
				System.out.println("Es divisible");
			}else {
				System.out.println("No es divisible");
			}
			sc.close();
		}
	}
