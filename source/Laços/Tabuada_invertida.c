/*
Imprimi a tabuada do 6 invertida
Testes dos laços FOR - decrementando
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int i;
	for(i=9 ; i > 0 ; i--)
		printf("\n%4d x 6 = %4d", i, i*6);
		
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
