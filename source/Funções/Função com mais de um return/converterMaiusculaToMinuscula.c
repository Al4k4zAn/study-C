/*Fun��o com mais de um return*/
/*@luisLeite*/
/*18/02/2014 - revis�o de fun��es*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /*para getche()*/

/* minusculo() */
/*Converte para minusculo se for maiusculo*/
unsigned char minusculo(unsigned char ch)
{
	if(ch >= 'A' && ch <= 'Z') /*Tratamento para caso mai�sculo*/
		return(ch + 'a' - 'A'); /*Devolve convertido*/
	else 
		return(ch); /*Devolve sem converter*/ 
}
int main()
{
	unsigned char ch;
	ch=getche(); /*L� um caracter*/
	printf("%c \n", minusculo(ch));
	system ("PAUSE");
	return 0;
}
