/*Programa que conta caracteres
@LuisLeite
FAC 3 - Ciência da Computação
*/

#include<stdio.h>
#include<stdlib.h>

char texto[100]; //variavel global
/*Função que conta o digito *Protótipo**/
void conta_digito(){
	int i; //variavel local
	for (i=0 ; texto[i]!='\0' ; i++);{ }//Para cara char diferente dentro da variavel texto ele conta, até encontrar o \0 final da linha
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
