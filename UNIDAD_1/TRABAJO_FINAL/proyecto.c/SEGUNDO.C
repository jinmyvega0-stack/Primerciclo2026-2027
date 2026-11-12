#include <stdio.h>

int main() {
    // DECLARACIÓN DE VARIABLES
    char *estudiante;
    const char* verificacion;
    int DIVI, UNO;
    float nota1, nota2, nota3, promedio, NOTA_MIN, inverso;

    // ASIGNACIÓN DE CONSTANTES
    NOTA_MIN = 7.0;
    DIVI = 3;
    UNO = 1;

    // INGRESO DEL NOMBRE DEL ESTUDIANTE
    printf("INGRESE EL NOMBRE DEL ESTUDIANTE\n");
    scanf("%s", estudiante);

    // INGRESO Y VALIDACIÓN DE LA NOTA 1
    printf("POR FAVOR INGRESE SU NOTA 1 QUE SEA DEL 0 AL 10\n");
    scanf("%f", &nota1);

    if (nota1 >= 0 && nota1 <= 10) {
        
        // INGRESO Y VALIDACIÓN DE LA NOTA 2
        printf("POR FAVOR INGRESE SU NOTA 2 QUE SEA DEL 0 AL 10\n");
        scanf("%f", &nota2);

        if (nota2 >= 0 && nota2 <= 10) {
            
            // INGRESO Y VALIDACIÓN DE LA NOTA 3
            printf("POR FAVOR INGRESE SU NOTA 3 QUE SEA DEL 0 AL 10\n");
            scanf("%f", &nota3);

            if (nota3 >= 0 && nota3 <= 10) {
                
                // CÁLCULO DEL PROMEDIO
                promedio = (nota1 + nota2 + nota3) / DIVI;

                // VERIFICACIÓN DE APROBACIÓN
                if (promedio >= NOTA_MIN) {
                    verificacion = "APROBADO";
                } else {
                    verificacion = "DESAPROBO";
                }

                // CÁLCULO DEL INVERSO MULTIPLICATIVO
                if (promedio > 0) {
                    inverso = UNO / promedio;
                    printf("EL INVERSO MULTIPLICATIVO DE SU PROMEDIO ES %.2f\n", inverso);
                } else {
                    printf("NO TIENE INVERSO YA QUE EL PROMEDIO DEL ESTUDIANTE FUE 0\n");
                }

                // IMPRESIÓN DE RESULTADOS
                printf("EL NOMBRE DEL ESTUDIANTE ES %s\n", estudiante);
                printf("EL PROMEDIO DEL ESTUDIANTE ES %.2f\n", promedio);
                printf("CON EL PROMEDIO OBTENIDO EL ESTUDIANTE %s\n", verificacion);

            } else {
                printf(" !!ERROR INGRESE BIEN SU NOTA 3!!\n");
            }

        } else {
            printf(" !!ERROR INGRESE BIEN SU NOTA 2!!\n");
        }

    } else {
        printf(" !!ERROR INGRESE BIEN SU NOTA 1!!\n");
    }

    return 0;
}