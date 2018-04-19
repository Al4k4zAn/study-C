/* Mostra a escrita da fun��o celsius() com prot�tipo externo*/
/*@LuisL - 17/02/14*/
/*Fun��es Simples*/
#include<stdio.h>
#include<stdlib.h>
/*Fun��o celsius (), do tipo float, e que recebe como argumento um valor float*/
float celsius(float); /*Prot�tipo ou declara��o da fun��o*/


int main ()
{
	float c,f;
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &f);
	
	c = celsius(f); /*Chamada a fun��o*/
	
	printf ("Celsius = %.2f\n", c);
	
	system("PAUSE");
	return 0;
}
/*celsius ()*/
/*Defini��o da fun��o*/

float celsius(float fahr)
{
	float c;
	c = (fahr - 32.0) * 5.0/9.0;
	return c;
}
