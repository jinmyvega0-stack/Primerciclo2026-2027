import java.util.Scanner;

public class Ape6 {
    public static void main(String[] args) {
        // Definir el scanner
        Scanner scanner = new Scanner(System.in);

        // Definir variables
        float ingreso_anual, impuesto_total, mitad_impuesto = 0.0f;

        // Definir constantes
        final float TRAMO_1 = 10000.0f, TRAMO_2 = 30000.0f, TRAMO_3 = 60000.0f;
        final float TASA_1 = 0.10f, TASA_2 = 0.15f, TASA_3 = 0.20f, TASA_4 = 0.30f;

        // Leer por teclado
        System.out.println("Escriba el ingreso anual:");
        ingreso_anual = scanner.nextFloat();

        // Proceso de solución
        if (ingreso_anual >= 0) {
            if (ingreso_anual <= TRAMO_1) {
                impuesto_total = 0.0f;
            } else if (ingreso_anual <= TRAMO_2) {
                impuesto_total = (ingreso_anual - TRAMO_1) * TASA_1;
            } else if (ingreso_anual <= TRAMO_3) {
                impuesto_total = ((TRAMO_2 - TRAMO_1) * TASA_1) + ((ingreso_anual - TRAMO_2) * TASA_2);
            } else {
                impuesto_total = ((TRAMO_2 - TRAMO_1) * TASA_1) + ((TRAMO_3 - TRAMO_2) * TASA_2) + ((ingreso_anual - TRAMO_3) * TASA_4);
            }

            mitad_impuesto = impuesto_total / 2.0f;

            // Presentar al usuario
            System.out.println("Ingreso anual evaluado: " + ingreso_anual);
            System.out.println("El impuesto total a pagar es: " + impuesto_total);
            System.out.println("La mitad del impuesto calculado es: " + mitad_impuesto);

        } else {
            System.out.println("El ingreso anual no puede ser negativo.");
        }

        scanner.close();
    }
}