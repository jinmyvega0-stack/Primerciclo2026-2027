#include <stdio.h>
//LIBRERIA PARA PODER REDONDEAR EL RESULTADO
#include <math.h>

int main() {
    // DEFINICION DE VARIABLES
    int bytes;
    float kb;
    float redondeo;
    const float DIVI = 1024.0;

    // LECTURA POR TECLADO
    printf("Ingrese el size en bytes: ");
    scanf("%d", &bytes);

    // PROCESO Y VALIDACION
    if (bytes >= 0) {
        
        kb = bytes / DIVI;
        redondeo = round(kb * 100.0) / 100.0;

        // PRESENTACION AL USUARIO
        printf("%d bytes equivalen a %.2f KB\n", bytes, redondeo);
        printf("El resultado exacto de la conversion es: %f\n", kb);
        printf("El resultado redondeado es: %.2f\n", redondeo);
    } else {
        printf("El size en bytes debe ser un numero positivo o cero\n");
    }

    return 0;
}