#include <stdio.h>

int main() {
    // DEFINICION DE VARIABLES
    float mph, kmh, maximo;
    const float FACTOR = 1.60934;
    
    // LECTURA POR TECLADO
    printf("Ingrese la velocidad en mph: ");
    scanf("%f", &mph);
    
    // PROCESO
    kmh = mph * FACTOR;
    
    // DETERMINAR VALOR MAXIMO
    if (mph > kmh) {
        maximo = mph;
    } else {
        maximo = kmh;
    }
    
    // PRESENTACION AL USUARIO
    if (kmh > 0) {
        printf("%.2f mph equivalen a %.2f km/h\n", mph, kmh);
        printf("El resultado de la conversion a km/h es: %.2f\n", kmh);
        printf("El valor maximo registrado es: %.2f\n", maximo);
    } else {
        printf("La velocidad en km/h no es mayor a 0\n");
    }
    
    return 0;
}