#include <stdio.h>

int main() {
    // DEFINICION DE VARIABLES
    float radio, altura;
    float area_base, area_lateral, area_total, volumen;
    float mitad_area_base, mitad_area_lateral, mitad_area_total, mitad_volumen;
    
    // CONSTANTE
    const float PI_CONST = 3.14159;

    // LEER POR TECLADO
    printf("Ingrese el radio del cilindro: ");
    scanf("%f", &radio);

    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &altura);

    // EVALUAR EXPRESION LOGICA
    if (radio > 0 && altura > 0) {

        // CALCULOS
        area_base = PI_CONST * radio * radio;
        area_lateral = 2 * PI_CONST * radio * altura;
        area_total = 2 * area_base + area_lateral;
        volumen = area_base * altura;

        // CALCULAR LAS MITADES DE LAS RESPUESTAS
        mitad_area_base = area_base / 2.0;
        mitad_area_lateral = area_lateral / 2.0;
        mitad_area_total = area_total / 2.0;
        mitad_volumen = volumen / 2.0;

        // PRESENTAR AL USUARIO
        printf("\n--- RESULTADOS DEL CILINDRO ---\n");
        printf("El area base es: %.4f\n", area_base);
        printf("La mitad area base es: %.4f\n", mitad_area_base);

        printf("El area lateral es: %.4f\n", area_lateral);
        printf("La mitad area lateral es: %.4f\n", mitad_area_lateral);

        printf("El area total es: %.4f\n", area_total);
        printf("La mitad area total es: %.4f\n", mitad_area_total);

        printf("El volumen es: %.4f\n", volumen);
        printf("La mitad_volumen es: %.4f\n", mitad_volumen);

    } else {
        printf("\nError: El radio y la altura deben ser mayores que 0.\n");
    }

    return 0;
}