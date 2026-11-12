#include <stdio.h>
//PARA CALCULAR EL SENO
#include <math.h>

int main() {
    // DEFINICION DE VARIABLES
    float lado;
    float perimetro;
    float seno_perimetro;
    const float CUATRO = 4.0;

    // LECTURA POR TECLADO
    printf("Ingrese la medida del lado del cuadrado: ");
    scanf("%f", &lado);

    // PROCESO Y VALIDACION
    if (lado > 0) {
        perimetro = CUATRO * lado;
        seno_perimetro = sin(perimetro);

        // PRESENTACION AL USUARIO
        printf("El perimetro del cuadrado es: %.2f\n", perimetro);
        printf("El seno del perimetro es: %.2f\n", seno_perimetro);
    } else {
        printf("La medida del lado debe ser mayor a 0\n");
    }

    return 0;
}