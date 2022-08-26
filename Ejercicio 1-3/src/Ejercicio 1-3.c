/*
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingrese el primer numero");
	scanf("%d", &numeroUno);

	printf("Ingrese el segundo numero");
	scanf("%d", &numeroDos);

	printf("Ingrese el tercer numero");
	scanf("%d", &numeroTres);

	if((numeroUno>numeroDos&&numeroUno<numeroTres) || (numeroUno<numeroDos&&numeroUno>numeroTres))
	{
		printf("El %d es el del medio", numeroUno);
	}
	else
	{
		if((numeroDos>numeroUno&&numeroDos<numeroTres) || (numeroDos<numeroUno&&numeroDos>numeroTres))
		{
			printf("El %d es el del medio", numeroDos);
		}
		else
		{
			if((numeroTres>numeroUno&&numeroTres<numeroDos) || (numeroTres<numeroUno&&numeroTres>numeroDos))
			{
				printf("El %d es el del medio", numeroTres);
			}
			else
			{
				printf("No hay numero del medio");
			}
		}
	}

	return EXIT_SUCCESS;
}
