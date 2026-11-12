#include <stdio.h>

int main() {
    // Definición de variables
    int a, residuo;
    
    // Ingreso de variables por teclado 
    printf("Ingrese un numero entero:\n");
    scanf("%d", &a);
    
    // Calcular el residuo del valor entregado con 7
    residuo = a % 7;
    
    // Presentación por pantalla al usuario
    printf("Residuo de la division entre 7: %d\n", residuo);
    
    // Verificar si es multiplo de 7
    if (residuo == 0 && a > 0) {
        printf("Es multiplo de 7\n");
    } else {
        printf("No es multiplo de 7\n");
    }
    
    // Verificar si a es par o impar
    if (a % 2 == 0) {
        printf("Es par\n");
    } else {
        printf("Es impar\n");
    }
    
    return 0;
}