#include <stdio.h>
#include <math.h>

int main() {
    // Definicion de variables
    float millas, km, logaritmo_km;
    
    // Definicion de constante
    const float MILLA_KM = 1.60934;

    // Lectura por teclado
    printf("Ingrese la distancia en millas: ");
    scanf("%f", &millas);

    // Proceso
    km = millas * MILLA_KM;

    // Evaluar si la distancia es mayor a 0 para seguir con los demas procesos
    if (km > 0) {
        logaritmo_km = log10(km);

        // Datos de salida
        printf("%.2f millas equivalen a %.2f km\n", millas, km);
        printf("km = %.4f\n", km);
        printf("logaritmo_km = %.4f\n", logaritmo_km);
    } else {
        printf("La distancia debe ser mayor a 0 para calcular el logaritmo.\n");
    }

    return 0;
}