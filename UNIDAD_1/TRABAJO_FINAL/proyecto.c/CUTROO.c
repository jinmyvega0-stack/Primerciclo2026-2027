#include <stdio.h>
// LIBRERIA PARA DECLARAR BOOLEANOS
#include <stdbool.h>

int main() {

    // DEFINICION DE VARIABLES
    float peso, altura;
    float LIMITE_BAJO, LIMITE_ALTO, UMBRAL, imc;
    bool es_mayor, en_rango, es_valido;

    // LEER POR TECLADO
    printf("POR FAVOR INGRESE EL PESO EN Kg\n");
    scanf("%f", &peso);
    printf("POR FAVOR INGRESE LA ALTURA EN m\n");
    scanf("%f", &altura);

    // CONSTANTES
    LIMITE_BAJO = 18.5;
    LIMITE_ALTO = 25.0;
    UMBRAL = 25.0;

    // DECLARAR LA BANDERA BOOLEANA
    if (peso > 0 && altura > 0) {

        es_valido = true;

        // proceso de resolucion
        imc = (peso / (altura * altura));

        if (imc >= LIMITE_BAJO && imc <= LIMITE_ALTO) {
            en_rango = true;
        } else {
            en_rango = false;
        }

        if (imc > UMBRAL) {
            es_mayor = true;
        } else {
            es_mayor = false;
        }

        // PRESENTAR PANTALLA
        printf("LOS VALORES INGRESADOS POR EL USUARIO HAN SIDO %s\n", es_valido ? "Verdadero " : "Falso ");
        printf("EL VALOR DE IMC EN EL CALCULO ARITMETICO ES %.2f \n", imc);
        printf("EL IMC SE ENCUENTRA DENTRO DE LOS LIMITES NORMALES: %s \n", en_rango ? "Verdadero " : "Falso ");
        printf("LA RESPUESTA OBTENIDA DE SI EL IMC ES MAYOR AL UMBRAL A SIDO %s \n", es_mayor ? "Verdadero " : "Falso ");

    } else {
        printf("EL VALOR INGRESADO POR EL USUARIIO HAN SIDO %s \n", es_mayor ? "Verdadero " : "Falso ");
    }

    return 0;
}


