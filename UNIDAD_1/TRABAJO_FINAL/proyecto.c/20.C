#include <stdio.h>
// DEFINICION DE VARIABLES
int main() { 
int votos_a, votos_b, votos_c, suma , VOTOS_MIN;
float  mitad, MAYORIA_ABSOLUTA;
const char* cadena ;
// CONSTANTE
VOTOS_MIN = 0;
MAYORIA_ABSOLUTA = 0.5;
// LEER POR TECLADO
printf ("Votos del candidato A\n ");
scanf ("%d" , &votos_a);
printf ("Votos del candidato B\n ");
scanf ("%d" , &votos_b);
printf ("Votos del candidato C\n ");
scanf ("%d" , &votos_c);

//PROCESO
suma = votos_a + votos_b + votos_c;
mitad = suma * MAYORIA_ABSOLUTA;
// EVALUAR EXPRESION LOGICA
if (votos_a > votos_b && votos_a > votos_c){
cadena = ("Ganador: es el candidato A");
}else
    if (votos_b > votos_a && votos_b > votos_c){
    cadena = ("Ganador: es el candidato B");
    }else 
        if (votos_c > votos_a && votos_c > votos_b){
        cadena = ("Ganador: es el candidato C");
        }
        else{
        cadena = ("Resultado a sido Empate");
        }

// PRESENTAR AL USUARIO
printf ("La suma de los votos es: %d \n" , suma);
printf ("En el conteo de votos se a llegado a la conclusion de que el %s \n" , cadena);
printf ("La mitad de la suma a sido: %.2f \n" , mitad);

return 0;
}