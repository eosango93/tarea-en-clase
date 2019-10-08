/******************************************************************************
Realizar un programa en C que permita ingresar por teclado los grados centígrados y Fahrenheit y realice la conversión.



*******************************************************************************/
#include <stdio.h>

void  main()
{
    float cent,far,gradosCent=0,gradosFar=0;
    int op;
    printf("menu principal\n1.grados centigrados a fahrenheit\n2.grados fahrenheit a centrigrados\n");
    printf("escoja la opcion:");
    scanf("%d",&op);
    if(op==1)
    
    {
        printf("ingrese los grados fahrenheit:");
    scanf("%f",&far);
    gradosCent=((far-32)*5)/9;
    printf("grados centigrados=%.2f\n",gradosCent);
    }
    else
    {
         printf("Ingrese los grados centigrados:");
    scanf("%f",&cent);
    gradosFar=((cent*9)/5)+32;
    printf("grados fahrenheit=%.2f",gradosFar);
    }
}