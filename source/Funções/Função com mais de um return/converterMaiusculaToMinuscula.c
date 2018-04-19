/*Função com mais de um return*/
/*@luisLeite*/
/*18/02/2014 - revisão de funções*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /*para getche()*/

/* minusculo() */
/*Converte para minusculo se for maiusculo*/
unsigned char minusculo(unsigned char ch)
{
	if(ch >= 'A' && ch <= 'Z') /*Tratamento para caso maiúsculo*/
		return(ch + 'a' - 'A'); /*Devolve convertido*/
	else 
		return(ch); /*Devolve sem converter*/ 
}
int main()
{
	unsigned char ch;
	ch=getche(); /*Lê um caracter*/
	printf("%c \n", minusculo(ch));
	system ("PAUSE");
	return 0;
}
