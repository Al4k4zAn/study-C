/* Mostra a escrita da função celsius() com protótipo externo*/
/*@LuisL - 17/02/14*/
/*Funções Simples*/
#include<stdio.h>
#include<stdlib.h>
/*Função celsius (), do tipo float, e que recebe como argumento um valor float*/
float celsius(float); /*Protótipo ou declaração da função*/


int main ()
{
	float c,f;
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &f);
	
	c = celsius(f); /*Chamada a função*/
	
	printf ("Celsius = %.2f\n", c);
	
	system("PAUSE");
	return 0;
}
/*celsius ()*/
/*Definição da função*/

float celsius(float fahr)
{
	float c;
	c = (fahr - 32.0) * 5.0/9.0;
	return c;
}
