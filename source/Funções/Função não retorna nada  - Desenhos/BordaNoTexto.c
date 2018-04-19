/*Desenha uma linha de blocos*/
/*Envolve um texto por uma moldura*/
/*@LuisLeite - 18/02/2014*/

#include<stdio.h>
#include<stdlib.h>

void linha(int); /*Protótipo*/

int main()
{
	linha (20);
	printf("\xDB UM PROGRAMA EM C \xDB\n");
	linha (20);
	system("PAUSE");
	return 0;
}

/*Linha()*/
/*Desenha uma linha sólida na tela, n caracteres*/
void linha(int n)
{
	int j;
	for (j=1; j<=n; j++)
		printf("\xDB");
	printf("\n");
}
