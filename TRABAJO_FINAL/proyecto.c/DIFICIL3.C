#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // CONSTANTES
    const int LONGITUD_TARJETA = 16;
    const int MODULO = 10;

    // DEFINICION DE VARIABLES
    char numero_tarjeta[20];
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16;
    int doble, suma = 0;
    bool tarjeta_valida;
    float mitad_suma;

    // ENTRADA DE DATOS
    printf("Ingrese el numero de tarjeta (16 digitos): ");
    scanf("%s", numero_tarjeta);

    // PROCESO Y VALIDACION
    if (strlen(numero_tarjeta) == LONGITUD_TARJETA) {
        
        // EXTRAER CADA DIGITO SE LE RESTA 0 PARA CONVERTIRLO A ENTERO
        d1 = numero_tarjeta[0] - '0';
        d2 = numero_tarjeta[1] - '0';
        d3 = numero_tarjeta[2] - '0';
        d4 = numero_tarjeta[3] - '0';
        d5 = numero_tarjeta[4] - '0';
        d6 = numero_tarjeta[5] - '0';
        d7 = numero_tarjeta[6] - '0';
        d8 = numero_tarjeta[7] - '0';
        d9 = numero_tarjeta[8] - '0';
        d10 = numero_tarjeta[9] - '0';
        d11 = numero_tarjeta[10] - '0';
        d12 = numero_tarjeta[11] - '0';
        d13 = numero_tarjeta[12] - '0';
        d14 = numero_tarjeta[13] - '0';
        d15 = numero_tarjeta[14] - '0';
        d16 = numero_tarjeta[15] - '0';

        // SUMAR POSICIONES IMPARES 
        suma = suma + d1 + d3 + d5 + d7 + d9 + d11 + d13 + d15;

        // EVALUAR CADA POSICION
        // Posicion 2
        doble = d2 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // Posicion 4
        doble = d4 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // Posicion 6
        doble = d6 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // Posicion 8
        doble = d8 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // Posicion 10
        doble = d10 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // Posicion 12
        doble = d12 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // Posicion 14
        doble = d14 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // Posicion 16
        doble = d16 * 2;
        if (doble > 9) {
            suma = suma + (doble - 9);
        } else {
            suma = suma + doble;
        }

        // EVALUAR EXPRESION LOGICA
        tarjeta_valida = (suma % MODULO == 0);
        mitad_suma = suma / 2.0;

        // SALIDA DE DATOS
        printf("\n--- RESULTADOS ---\n");
        printf("Suma total: %d\n", suma);
        printf("Mitad de la suma: %.2f\n", mitad_suma);

        if (tarjeta_valida) {
            printf("Resultado: La tarjeta es VALIDA\n");
        } else {
            printf("Resultado: La tarjeta NO es valida\n");
        }

    } else {
        printf("Error: La tarjeta debe tener exactamente 16 digitos.\n");
    }

    return 0;
}