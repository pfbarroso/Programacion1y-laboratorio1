#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int opcion;
    int seguir = 's';
    do
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            IngresarPrimerOperando("Primer Operando");
            break;
        case 2:
            //Funci�n IngresarSegundoOperando()
            break;
        case 3:
            //Funci�n CalcularSuma()
            break;
        case 4:
            //Funci�n CalcularResta()
            break;
        case 5:
            //Funci�n CalcularDivision()
            break;
        case 6:
            //Funci�n CalcularMult()
            break;
        case 7:
            //Funci�n CalcularFactorial()
            break;
        case 8:
            //Funci�n CalcularTodo()
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    while(seguir=='s');
    return 0;
}//Fin de main()
