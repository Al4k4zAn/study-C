/*Reescrevendo a fun��o celsius()*/
#include<stdio.h>
#include<stdlib.h>

/*celsius()*/
/*Defini��o da Fun��o*/
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
	
	c = celsius(f); /*Chamada a fun��o*/
	
	printf("Celsius = %2.f\n", c);
	system("PAUSE");
	return 0;
}
