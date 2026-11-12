#include <stdio.h>

int main (){

//DECLARACION DE VARIABLES
float pocentaje = 0.0; 
char b;
char s;

//CONSTANTES
int SUMATIVO = 32;
float DESCUENTO = 0.05;

//INGRESO DE VARIABLES POR EL USUARIO
printf("POR FAVOR INGRESE UNA SOLA LETRA SEA MAYUSCULA O MINUSCULA\n");
	scanf("%c" , &b);

//Proceso 
if (b>='A' && b<='Z'){
    s = b + 32;
}else {
    s = b;
}

//CALCULO DEL PORCENTAJE
pocentaje = s - (s * DESCUENTO);

//PRESENTAR AL USUARIO
printf ("LA LETRA INGRESADA POR USTED ES %c \n" , b);
printf ("SU LETRA CONVERTIDA EN MINUSCULA ES %c\n" , s  );
printf ("EL VALOR DE LA RESTA DEL 5%% %.2f\n" , pocentaje );

}