import javax.swing.JOptionPane;

public class ejercicios_25 {

    public static void main(String[] args) {
        try {
            // Pedimos los dos operandos al usuario
            int operando1 = Integer.parseInt(JOptionPane.showInputDialog("Introduce el primer operando (entero):"));
            int operando2 = Integer.parseInt(JOptionPane.showInputDialog("Introduce el segundo operando (entero):"));
            
            // Pedimos el signo aritmético
            String operacion = JOptionPane.showInputDialog("Introduce el signo aritmético (+, -, *, /, ^, %):");
            
            double resultado = 0;
            boolean operacionValida = true;
            
            // Realizamos la operación correspondiente
            switch (operacion) {
                case "+":
                    resultado = operando1 + operando2;
                    break;
                case "-":
                    resultado = operando1 - operando2;
                    break;
                case "*":
                    resultado = operando1 * operando2;
                    break;
                case "/":
                    // Verificamos que el segundo operando no sea cero para evitar división entre 0
                    if (operando2 != 0) {
                        resultado = (double) operando1 / operando2;
                    } else {
                        JOptionPane.showMessageDialog(null, "Error: No se puede dividir entre 0");
                        operacionValida = false;
                    }
                    break;
                case "^":
                    resultado = Math.pow(operando1, operando2);
                    break;
                case "%":
                    resultado = operando1 % operando2;
                    break;
                default:
                    JOptionPane.showMessageDialog(null, "Operación no válida. Por favor, introduce uno de los siguientes signos: +, -, *, /, ^, %");
                    operacionValida = false;
                    break;
            }
            
            // Mostramos el resultado en un cuadro de diálogo si la operación fue válida
            if (operacionValida) {
                JOptionPane.showMessageDialog(null, "El resultado de la operación es: " + resultado);
            }
        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(null, "Error: Debes introducir valores numéricos válidos.");
        }
    }
}
