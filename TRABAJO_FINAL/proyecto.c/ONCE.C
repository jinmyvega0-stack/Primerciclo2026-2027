#include <stdio.h>

int main() {
    // DEFINICION DE VARIABLES
    float litros, ml, porcentaje;
    const float MIL = 1000.0;
    const float REFERENCIA = 2000.0;
    
    // LECTURA POR TECLADO
    printf("Ingrese el volumen en litros: ");
    scanf("%f", &litros);
    
    // PROCESO
    ml = litros * MIL;
    porcentaje = (ml / REFERENCIA) * 100;
    
    // PRESENTACION AL USUARIO
    if (ml >= 0) {
        printf("%.2f litros equivalen a %.2f ml\n", litros, ml);
        printf("El resultado de la conversion a mililitros es: %.2f\n", ml);
        printf("El porcentaje calculado respecto a la referencia es: %.2f%%\n", porcentaje);
    } else {
        printf("El volumen en mililitros no puede ser menor a 0\n");
    }
    
    return 0;
}