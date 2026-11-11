#include <stdio.h>

int main() {
    // Declaracion variables
    float C1 = 0.0;
    float C2 = 0.0;
    float C3 = 0.0;
    float NC = 0.0;
    float NL = 0.0;
    float NF = 0.0;

    // Lectura por teclado
    printf("Ingrese la nota del examen 1: ");
    scanf("%f", &C1);

    printf("Ingrese la nota del examen 2: ");
    scanf("%f", &C2);

    printf("Ingrese la nota de laboratorio: ");
    scanf("%f", &NL);

    // Calculo secuencial del promedio 
    NC = (60.0 - (NL * 0.3)) / 0.7;
    C3 = (3.0 * NC) - C1 - C2;
    NF = (NC * 0.7) + (NL * 0.3);

    // condicion de si necesita o no presentar el examen 3
    if (C3 < 0) {
        printf("El estudiante ya cuenta con puntaje suficiente para aprobar la asignatura\n");
    } else {
        printf("La nota que necesita obtener en el examen 3 para aprobar es: %.2f\n", C3);
    }

    // presentacion al ususuario 
    printf("La nota final del estudiante es: %.2f\n", NF);

    return 0;
}