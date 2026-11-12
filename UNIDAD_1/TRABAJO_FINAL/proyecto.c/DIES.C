#include <stdio.h>

int main() {
    // DEFINICION VARIABLES
    float pies , metros;
    //CONSTANTE
    float PIE_METRO = 0.3048;

    // LECTURA POR TECLADO
    printf("Ingrese la altura en pies: ");
    scanf("%f", &pies);

    // PROCESO
    metros = pies * PIE_METRO;

    // PRESENTACION
    printf("La conversion a metros ha sido: %.2f\n", metros);
    printf("%.2f pies equivalen a %.2f metros\n", pies, metros);

    // CONDICIONES PARA PRESENTAR AL USUARIO
    if (metros > 0) {
        //APLICACION DE UN INT PARA SOLO TOMAR LA PARTE ENTERA
        if ((int)metros % 2 == 0) {
            printf("El numero es par\n");
        } else {
            printf("El numero es impar\n");
        }
    } else {
        printf("La conversion de pies a metros no fue mayor a 0\n");
    }

    return 0;
}