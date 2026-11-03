#include <stdio.h>

int main() {
    // Definición de variables
    float pulgadas, cm, producto_pi;
    float PULGADA_CM, PI_CONST;
    
    // Definición de constantes
    PULGADA_CM = 2.54;
    PI_CONST = 3.14159;
    
    // PEDIR DATOS AL USUARIO
    printf("Ingrese la medida en pulgadas:\n");
    scanf("%f", &pulgadas);
    
    // Calcular equivalencia en centímetros
    cm = pulgadas * PULGADA_CM;
    
    // Evaluar la expresión
    if (cm > 0) {
        printf("%.2f pulgadas equivalen a %.2f cm\n", pulgadas, cm);
        
        // Calcular el producto por PI solo si es válido
        producto_pi = cm * PI_CONST;
        
        // Presentar al usuario
        printf("El resultado de convertir pulgadas a centimetros es %.2f\n", cm);
        printf("El resultado multiplicado por Pi es %.2f\n", producto_pi);
    } else {
        printf("La medida ingresada no es valida (debe ser mayor a 0).\n");
    }
    
    return 0;
}