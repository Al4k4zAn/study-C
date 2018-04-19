/*Calculando a área de uma esfera*/
#include<stdio.h>
#include<stdlib.h>

const float PI=3.14159;

float area(float); /*Protótipo*/

int main()
{
	float raio;
	printf("Digite o raio da esfera: ");
	scanf("%f", &raio);
	printf("\nA area da Esfera eh %.2f\n", area(raio));
	system("PAUSE");
	return 0;
}
/*area ()*/
/*Retorna a área da esfera*/
float area(float r) /*Definição da função*/
{
	return (4 * PI * r * r);
}

