#include <stdio.h>
// LIBRERIA PARA DECLARAR BOOLEANOS
#include <stdbool.h>

int main (){
//Definir variables
float numero1, numero2, numero3 ;
int year , CUATRO, CIEN, CUATROCIENTOS ;
float media ;
bool es_bisiesto ;

//constantes
CUATRO = 4 , CIEN = 100 , CUATROCIENTOS = 400;

//PEDIR EL AÑO Y LOS 3 NUMEROS
printf("------- PORFAVOR INGRESE UN year--------\n");
scanf ("%d" , &year );
printf("---------INGRESE SUS 3 NUMEROS----------\n");
scanf("%f %f %f" , &numero1 , &numero2 ,&numero3);

// Evaluar la expresion logica
    if ((year % CUATRO==0) && (year % CIEN!=0 || year % CUATROCIENTOS==0)){
        es_bisiesto = true;
     }else {es_bisiesto = false;}

//La media de 3 numeros
media = (numero1+numero2+numero3)/3;

//presentar en la pantalla al usuario
printf("El year %d es bisiesto? %s\n" , year , es_bisiesto ? "Verdadero" : "Falso");
printf("La media de sus 3 numeros es %.2f \n" , media );    

return 0;

}