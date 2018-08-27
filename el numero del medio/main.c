#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroDelMedio;
    int maximo;
    int minimo;

    printf("Ingrese un numero entero\n");
    scanf("%d",numeroUno);
    maximo = numeroUno;
    minimo = numeroUno;

    printf("Ingrese otro numero entero\n");
    scanf("%d",& numeroDos);
    if (numeroDos < minimo)
    {
        minimo = numeroDos;
    }
    else {
        if (numeroDos > maximo)
        {
            maximo = numeroDos;
        }
    }

    printf("Ingrese otro numero entero\n");
    scanf("%d", numeroTres);
     if (numeroTres< minimo)
    {
        minimo = numeroTres;
    }
    else {
        if (numeroTres > maximo)
        {
            maximo = numeroTres;
        }
    }

    if (numeroUno != maximo && numeroUno != minimo)
    {

    }
    else {
            if (numeroDos != maximo && numeroDos != minimo)
            {
                numeroDos = numeroDelMedio;
            }
            else {
                if (numeroTres != maximo && numeroTres != minimo)
                {
                    numeroTres = numeroDelMedio;
                }
            }
        }


    printf("El numero del medio es : %d",numeroDelMedio);
    return 0;
}
