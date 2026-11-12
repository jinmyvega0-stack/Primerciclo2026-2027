#include <stdio.h>

int main (){

//Definir variables
float radio , area ;
int num1 , num2 , resto ;
float PI_CONST;

//Definir constantes
PI_CONST = 3.14159;

//Pedir por teclado al usuario
printf("Ingrese el radio del circulo:\n");
scanf("%f" , &radio);

printf ("Ingrese el primer numero y segundo numero\n");
scanf("%d %d" , &num1 , &num2);

//Calculo del area
area = PI_CONST * radio * radio;

//Calculo del resto de la division
resto = num1 % num2;

//Presentacion al usuario
printf("El area del circulo con radio %.2f es %.2f \n" , radio , area);
printf("El residuo de los numeros %d y %d es %d" , num1 , num2 , resto);

return 0 ;

}