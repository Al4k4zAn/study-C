/*Programa que conta caracteres
@LuisLeite
FAC 3 - Ci�ncia da Computa��o
*/

#include<stdio.h>
#include<stdlib.h>

char texto[100]; //variavel global
/*Fun��o que conta o digito *Prot�tipo**/
void conta_digito(){
	int i; //variavel local
	for (i=0 ; texto[i]!='\0' ; i++);{ }//Para cara char diferente dentro da variavel texto ele conta, at� encontrar o \0 final da linha
		if(i!=0)//definido parametro diferente de 0
			printf("\t%s ,tem %d caracter(es)\n\n", texto, i); //exibe na tela
		else  
			printf("\nNada foi recebido!!!");
	}
	
main(){
	printf("Digite:");
	gets(texto);
	
	conta_digito();
	
system("PAUSE");
}
