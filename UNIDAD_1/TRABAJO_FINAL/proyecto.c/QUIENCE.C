#include <stdio.h>
// PARA EL DATO BOOLEANO
#include <stdbool.h> 

int main() {
    // DEFINICION DE VARIABLES
    int y;
    bool es_multiplo;
    float resultado_division;
    const int CINCO = 5;
    const float DIVISOR = 2.0;

    // LECTURA POR TECLADO
    printf("Ingrese un numero entero: ");
    scanf("%d", &y);

    // PROCESO
    es_multiplo = (y % CINCO == 0) && (y != 0);
    resultado_division = (float)y / DIVISOR;

    // PRESENTACION AL USUARIO
    printf("El resultado de la division entre %.1f es: %.2f\n", DIVISOR, resultado_division);

    if (es_multiplo) {
        printf("El numero %d ES multiplo de 5\n", y);
    } else {
        printf("El numero %d NO es multiplo de 5\n", y);
    }

    return 0;
}