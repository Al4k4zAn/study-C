/*Reescrevendo a função celsius()*/
#include<stdio.h>
#include<stdlib.h>

/*celsius()*/
/*Definição da Função*/
float celsius(float fahr)
{
	float c;
	c = (fahr - 32.0) * 5.0/9.0;
	return c;
}
int main ()
{
	float c, f;
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &f);
	
	c = celsius(f); /*Chamada a função*/
	
	printf("Celsius = %2.f\n", c);
	system("PAUSE");
	return 0;
}
