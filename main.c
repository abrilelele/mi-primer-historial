/*calculadora_conversiones: este script corresponde al desarrollo de una aplicacion llamada "conversiones de temperaatura",
y muestra un menu de conversiones que deberá incluir las siguientes 1) Celcious a Farenheit, 2) Farenheit a Celcius
3) Celcius a Kelvin.*/

/*el usuario debera hacer tantas conversiones como desee y se debera desarrollar una funcion para cada conversion. al finalizar
se debera de dar un mensaje de despedida al usuario. se deberan utilizar prototipos agrupados para cada una de las funciones
del menu principal*/

#include<stdio.h>
void conversion_A_C(void);
int main (){
    int opcion;
    do {

        printf("=============================\n");
        printf("Conversiones de temperatura\n");
        printf("Seleccione el tipo de conversion a realizar\n");
        printf("1) Celsious a Farenheit\n");
        printf("2) Farenheit a Celsius\n");
        printf("3) Celsius a Kelvin\n");
        printf("4)Salir");
        scanf("%d", &opcion);
        printf("===========================\n");

        switch (opcion){
            case 1:
            printf("Conversion de celsius a farenheit\n");
            break;

            case 2:
            printf("Conversion de farenheit a celsius\n");
            break;

            case 3:
            printf("Conversion de celsius a Kelvin\n");
            break;

            case 4:
            printf("hasta luego");
            break;


    }
    }
    while (opcion!=4);
    return 0;
}