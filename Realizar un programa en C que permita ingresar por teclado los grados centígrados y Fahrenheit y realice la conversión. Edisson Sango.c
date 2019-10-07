#include <stdio.h>

#include <stdlib.h>
int main()
{
    // Declaracion de variables a utilizar
    float Centigrados=0.0;
    float Fahrenheit=0.0;
    // Solicitar los grados a convertir
    printf("Teclee grados fahrenheit..: ");
    scanf(" %f",&Fahrenheit);
    // Realizar la conversion a grados celsius
    Centigrados = (5.0/9.0)*(Fahrenheit-32);
    Fahrenheit=(Centigrados*9.0/5.0)+32;
    // Visualizar la conversion realizada
    printf("\nGrados Celsius : %.2f",Centigrados);
    return 0;
}