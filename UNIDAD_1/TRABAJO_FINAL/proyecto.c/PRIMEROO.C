#include <stdio.h>

int main (){

    //DEFINIR VARIABLES
 int C , x , r , num1 , suma , producto = 0;
 double A , promedio , cociente_S , cociente_D , cociente_P = 0.0;

 //DATOS CONSTANTES
C = 3;
A = 1.5;

//LECTURA POR TECLADO + la condicion de
printf("INGRESE UN NUMERO ENTERO ENTRE 1 Y 100\n");
    scanf("%d" , &x);

if (x >= 1 && x <= 100){

    printf("INGRESE UN NUMERO ENTERO ENTRE 1 Y 100\n");
    scanf("%d" , &r);
    
    if (r >= 1 && r <= 100){
        
        printf("INGRESE UN NUMERO ENTERO ENTRE 1 Y 100\n");
        scanf("%d" , &num1);
        
        if (num1 >= 1 && num1 <= 100){ 

            //OPERACIONES DE SUMA _ PRODUCTO _ PROMEDIO 
            suma = x + r + num1;
            producto = x * r * num1;
            promedio = suma / C;

            //Cociente de suma, producto y promedio dividido por 1.5 
            cociente_S = suma / A;
            cociente_D = producto / A;
            cociente_P = promedio / A;

            //PRESENTAR LOS RESULTADOS AL USUARIO
            printf("LA SUMA DE SUS 3 VARIABLES ES \n%d" , suma);
            printf("\nEL PRODUCTO DE SUS 3 VARIABLES ES \n%d" , producto); 
            printf("\nEL PROMEDIO DE SUS 3 VARIABLES ES \n%.2f" , promedio);
            printf("\nEL COCIENTE DE SU SUMA DIVIDIDO POR 1.5 ES \n%.2f" , cociente_S);
            printf("\nEL COCIENTE DE SU PRODUCTO DIVIDIDO POR 1.5 ES \n%.2f" , cociente_D);
            printf("\nEL COCIENTE DE SU PROMEDIO DIVIDIDO POR 1.5 ES \n%.2f" , cociente_P);

        } else {
            printf ("EL TERCER NUMERO NO ESTA EN EL RANGO INDICADO ENTRE 1 AL 100");
        }

    } else {
        printf ("EL SEGUNDO NUMERO NO ESTA EN EL RANGO INDICADO ENTRE 1 AL 100");
    }

} else {
    printf ("EL PRIMER NUMERO NO ESTA EN EL RANGO INDICADO ENTRE 1 AL 100");
}

return 0;
}