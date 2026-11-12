#include <stdio.h>
#include <stdbool.h>

int main(){
// DEFINICION DE VARIABLES
int puntos, nivel , BONO_NIVEL, NIVEL_MAX ;
float tiempo, bono_time, bono_level, puntuacion_total, mitad_puntuacion ;
bool nivel_valido;
float BONO_TIEMPO, TIEMPO_MIN;

// CONSTANTES
BONO_TIEMPO = 0.10 , BONO_NIVEL = 100 ,TIEMPO_MIN = 30.0 , NIVEL_MAX = 10;

// LEER POR TECLADO
printf ("Ingrese los puntos obtenidos \n");
    scanf ("%d" , &puntos);
printf ("Ingrese el tiempo en minutos \n");
    scanf ("%f" , &tiempo);
printf ("Ingrese el nivel alcanzado \n");
    scanf ("%d" , &nivel);

//validacion de niver y tiempo
nivel_valido = nivel >= 1 && nivel <= NIVEL_MAX;

if (nivel_valido && tiempo > 0){

    //Evaluacion de bono por tiempo
    if (nivel_valido && tiempo > 0){
        bono_time = puntos * BONO_TIEMPO * 1;
    }else{
        bono_time = puntos * BONO_TIEMPO * 0;
    }
    
    //calculo de puntuacion 
    bono_level = nivel * BONO_NIVEL;
	puntuacion_total = puntos + bono_time + bono_level;
	mitad_puntuacion = puntuacion_total / 2.0;
		
    // PRESENTAR PANTALLA
    printf ("-- RESULTADOS DEL JUEGO --\n");
    printf ("Puntuacion total obtenida: %.2f \n" , puntuacion_total);
    printf ("La mitad de la puntuacion total es: %.2f \n" , mitad_puntuacion);

}else{ printf("El nivel debe estar entre 1 y 10 y el tiempo debe ser mayor a 0 \n");}

return 0;

}