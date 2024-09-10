package ejercicios_propuestos;
import java.util.Scanner;

public class ej_4 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String nombre;
		System.out.println("Ingrese su nombre: ");
		nombre  = sc.nextLine();
		
		System.out.println("Hola, "+ (nombre) + "❤️");		
		sc.close();
	}
}
