import java.util.Scanner;

public class DiasSemana {
    
    // Definición del enum con los días de la semana
    enum Dia {
        LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar al usuario un día de la semana
        System.out.print("Introduce un día de la semana (en mayúsculas): ");
        String diaUsuario = scanner.nextLine().toUpperCase();
        
        // Convertir el día ingresado a un valor del enum
        try {
            Dia dia = Dia.valueOf(diaUsuario);
            
            // Comprobar si es un día laboral o no
            switch (dia) {
                case LUNES:
                case MARTES:
                case MIERCOLES:
                case JUEVES:
                case VIERNES:
                    System.out.println(dia + " es un día laboral.");
                    break;
                case SABADO:
                case DOMINGO:
                    System.out.println(dia + " no es un día laboral.");
                    break;
            }
        } catch (IllegalArgumentException e) {
            System.out.println("El día ingresado no es válido.");
        }
        
        scanner.close();
    }
}
