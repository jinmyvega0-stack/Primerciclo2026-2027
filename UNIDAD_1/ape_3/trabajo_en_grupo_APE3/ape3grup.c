#include <stdio.h>

int main(){
    
    //VARIABLES INGRESADAS POR EL USUARIO
    int cantidad_documentos = 0;
    float tam_documentos = 0.0;
    int cantidad_imagenes = 0;
    float tam_imagenes = 0.0;
    int cantidad_videos = 0;
    float tam_videos = 0.0;
    int cantidad_programas = 0;
    float tam_programas = 0.0;
    float capacidad_discoGB = 0.0;
    
    //NUMEROS CONSTANTES
    const int divisor = 1024;
    const int multiplicador = 100;

    //INGRESO DE VARIABLES
    printf("Porfavor ingrese la cantidad de documentos : \n");
    scanf("%d" , &cantidad_documentos);
    printf("Ahora el tamano promedio de sus documentos : \n");
    scanf("%f" , &tam_documentos);
    
    printf("Porfavor ingrese la cantidad de imagenes : \n");
    scanf("%d" , &cantidad_imagenes);
    printf("Ahora el tamano promedio de sus imagenes : \n");
    scanf("%f" , &tam_imagenes);

    printf("Porfavor ingrese la cantidad de videos : \n");
    scanf("%d" , &cantidad_videos);
    printf("Ahora ingrese el tamano promedio de sus videos : \n");
    scanf("%f" , &tam_videos);

    printf("Porfavor ingrese la cantidad de programas : \n");
    scanf("%d" , &cantidad_programas);
    printf("Ahora ingrese el tamano promedio de sus programas : \n");
    scanf("%f" , &tam_programas);

    printf("Ingrese la capacidad de su disco en GB : \n");
    scanf("%f" , &capacidad_discoGB);

    //RESPUESTAS DEL ESPACIO UTILIZADO POR TIPO DE CONTENIDO
    float espacio_documentos = cantidad_documentos * tam_documentos;
    float espacio_imagenes = cantidad_imagenes * tam_imagenes;
    float espacio_videos = cantidad_videos * tam_videos;
    float espacio_programas = cantidad_programas * tam_programas;

    // RESPUESTAS DEL ESPACIO TOTAL UTILIZADO Y PORCENTAJE
    float espacio_total = espacio_documentos + espacio_imagenes +espacio_videos + espacio_programas;
    float GB = espacio_total / divisor;
    float porcentaje = (GB / capacidad_discoGB) * multiplicador;

    //IMPRESION DE RESULTADOS
    printf(" El espacio ocupado por documentos es %.2f MB\n", espacio_documentos);
    printf(" El espacio ocupado por las imagenes es %.2f MB\n" , espacio_imagenes);
    printf(" El espacio ocupado por los videos es %.2f MB\n", espacio_videos);
    printf(" El espacio ocupado por programas es %.2f MB\n", espacio_programas);

    printf(" El espacio total ocupado es %.2f MB\n" , espacio_total);
    printf(" El espacio total en GB es %.2f GB\n" , GB);
    printf(" El porcentaje utilizado es %.2f %%\n" , porcentaje);
    printf(" La capacidad del disco es %.2f GB\n" , capacidad_discoGB);

    return 0;
}
