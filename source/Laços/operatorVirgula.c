/*Laços FOR e virgulas para separar varias intruçoes
significa 'faça isso', depois isso...
@uthor ItzRike
DEC-2013
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int i,j;
	for (i=0,j=i; (i+j) < 100; i++, j++)/*Imprime todos os numeros pares de 0 a 100*/
		printf("\t%d", i + j);
		
	printf("\n");
	system("pause");
	return 0;
}
