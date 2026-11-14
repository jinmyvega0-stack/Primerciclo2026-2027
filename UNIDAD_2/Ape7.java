import java.util.Scanner;

public class Ape7{
    public static void main(String[] args){

        //Definir variables
        float evaluacion_individual, trabajo_grupal, evaluacion_final= 0.0f;
        float individual, grupal, finali = 0.0f;
        float nota_final = 0.0f;
        String aprobacion = "", destacado= "", felicitaciones = "";
        Scanner scanner = new Scanner(System.in);

        //Declaracion de constantes
        final float Treinta = 0.3f;
        final float Cuarenta = 0.4f;

        //Leer por teclado y aplicar condiciones con bucles 
        System.out.println("Ingrese la nota de evaluacion individual del estudiante");
        do {
            evaluacion_individual = scanner.nextFloat();
            if (evaluacion_individual<0 || evaluacion_individual > 10){
                System.out.println("Porfavor ingrese bien la nota de la evaluacion individual del estudiante");
            }
        }while (!(evaluacion_individual>=0 && evaluacion_individual<=10));
        System.out.println("Ingrese la nota del trabajo grupal del estudiante");
        do{
            trabajo_grupal= scanner.nextFloat();
            if(trabajo_grupal<0 || trabajo_grupal>10){
                System.out.println("Porfavor ingrese bien la nota del trabajo grupal del estudiante");
            }
        }while(!(trabajo_grupal>=0 && trabajo_grupal<=10));
        System.out.println("Ingrese la nota de evaluacion final del estudiante");
        do{
            evaluacion_final = scanner.nextFloat();
            if(evaluacion_final<0 || evaluacion_final>10){
                System.out.println("Porfavor ingrese bien la nota de la evalucion final del estudiante");
            }
        }while(!(evaluacion_final>=0 && evaluacion_final<=10));

        //Sacar el valor de cada nota individual
        individual= evaluacion_individual * Treinta;
        grupal= trabajo_grupal * Treinta;
        finali = evaluacion_final *Cuarenta;

        //Calculo de la nota final
        nota_final = individual + grupal + finali;

        //El estudiante aprobo o reprobo y nesecita o no refuerzo academico
        if (nota_final>=7){
            aprobacion = ("Aprobo");
        }else aprobacion = ("Reprobo");
        if (nota_final >= 9){
            felicitaciones = ("A tenido un rendimiento Sobresaliente ¡Felicitaciones!");
        }else 
            if(nota_final>=7 && nota_final <9){
                    felicitaciones = ("A tenido un rendimiento normal y lo puede mejorar");
        }   else 
                if (nota_final<7){
                        felicitaciones =("requiere refuerzo académico");
        }

        //Nivel de desempeño
        if (nota_final >= 9 && nota_final <=10){
            destacado = ("Exelente");
        }else 
            if (nota_final>=8 && nota_final<9){
                destacado = ("Muy bueno");
            }else
                if (nota_final >= 7 && nota_final <8){
                    destacado =("Bueno");
                }else
                    if (nota_final>=5 && nota_final<7){
                        destacado = ("Regular");
                    }else
                        if (nota_final>=0 && nota_final<5){
                            destacado = ("Deficiente");
                        }

      //Presentar al usuario
      System.out.println("La nota de la evaluacion individual del estudiante es: " + evaluacion_individual );
      System.out.println("La nota del trabajo grupal del estudiante es: " + trabajo_grupal);
      System.out.println("La nota de la evaluacion final del estudiante es: " + evaluacion_final );
      System.out.println("El promedio final del estudiante es: " + nota_final);
      System.out.println("Con el promedio obtenido en la unidad uno que es de " + nota_final + " el estudiante: " + aprobacion );
      System.out.println("El desempeño del estudiante a sido: " + destacado);
      System.out.println("En esta unidad el estudiante " + felicitaciones);                  
    }
    }
