#include <stdio.h>

int main (){
// DEFINICION DE VARIABLES
float ingreso_anual , impuesto_total , mitad_impuesto;

// CONSTANTES
const float TRAMO_1 = 10000.0 , TRAMO_2 = 30000.0 , TRAMO_3 = 60000.0 , TASA_1 = 0.10 , TASA_2 = 0.15 , TASA_3 = 0.20 , TASA_4 = 0.30;

// LEER POR TECLADO
printf ("Ingrese el ingreso anual \n");
    scanf ("%f" , &ingreso_anual);

// proceso de resolucion
if (ingreso_anual > 0){
    if (ingreso_anual <= TRAMO_1){
        impuesto_total = 0.0;
    }else
         if (ingreso_anual <= TRAMO_2){
        impuesto_total = (ingreso_anual - TRAMO_1) * TASA_1;
         }else
             if (ingreso_anual <= TRAMO_3){
               impuesto_total = ((TRAMO_2 - TRAMO_1) * TASA_1) + ((ingreso_anual - TRAMO_2) * TASA_2);
             }else{
                impuesto_total = ((TRAMO_2 - TRAMO_1) * TASA_1) + ((TRAMO_3 - TRAMO_2) * TASA_2) + ((ingreso_anual - TRAMO_3) * TASA_3);
             }


    mitad_impuesto = impuesto_total / 2.0;
    // PRESENTAR PANTALLA
    printf ("Ingreso anual evaluado: %.2f \n" , ingreso_anual);
    printf ("El impuesto total a pagar es: %.2f \n" , impuesto_total);
    printf ("La mitad del impuesto calculado es: %.2f \n" , mitad_impuesto);

}else{ printf("El ingreso anual debe ser mayor a 0 \n");}

return 0;

}