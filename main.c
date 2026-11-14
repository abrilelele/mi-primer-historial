/*calculadora_conversiones: este script corresponde al desarrollo de una aplicacion llamada "conversiones de temperaatura",
y muestra un menu de conversiones que deberá incluir las siguientes 1) Celcious a Farenheit, 2) Farenheit a Celcius
3) Celcius a Kelvin.*/

/*el usuario debera hacer tantas conversiones como desee y se debera desarrollar una funcion para cada conversion. al finalizar
se debera de dar un mensaje de despedida al usuario. se deberan utilizar prototipos agrupados para cada una de las funciones
del menu principal*/

#include<stdio.h>
void conversion_A_F(void);
void conversion_A_C(void);
void conversion_A_K(void);
int main (){
    int opcion;
    do {

        printf("=============================\n");
        printf("Bienvenido al programa de conversiones");
        printf("Menu principal\n");
        printf("1) Celsious a Farenheit\n");
        printf("2) Farenheit a Celsius\n");
        printf("3) Celsius a Kelvin\n");
        printf("4)Salir\n");
        printf("===========================\n");
        printf("Seleccione el tipo de conversion a realizar\n");
        scanf("%d", &opcion);

        switch (opcion){
            case 1:
            printf("Conversion de celsius a farenheit\n");
            conversion_A_F();
            break;

            case 2:
            printf("Conversion de farenheit a celsius\n");
            conversion_A_C();
            break;

            case 3:
            printf("Conversion de celsius a Kelvin\n");
            conversion_A_K();
            break;

            case 4:
            printf("hasta luego");
            break;

            default:
            printf("Opcion no valida\n");
    }
    }
    while (opcion!=4);
    return 0;
}
void conversion_A_F(void){
    float temp_user;
    float resultado;
    printf("ingrese la temp en Celsius: ");
    scanf ("%f", &temp_user);
    resultado= (temp_user*1.8)+32;
    printf("El resultado de %.2f grados a Farenheit es: %.2f\n", temp_user, resultado);
}
void conversion_A_C(void){
    float temp_user;
    float resultado;
    printf("ingrese la temp en Farenheit: ");
    scanf ("%f", &temp_user);
    resultado= (temp_user - 32)/1.8;
    printf("El resultado de %.2f Farenheit a Celsius es: %.2f\n", temp_user, resultado);

}
void conversion_A_K(void){
    double temp_user;
    double resultado;
    printf("ingrese la temp en Celsius: ");
    scanf ("%lf", &temp_user);
    resultado= temp_user+273.15;
    printf("El resultado de %.2lf Celsius a Kelvin es: %.2lf K", temp_user, resultado);
}