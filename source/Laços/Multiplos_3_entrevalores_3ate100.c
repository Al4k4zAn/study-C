/*
@uthor: Luis Henrique

Imprimir os multiplos de 3 entre 3 e 100
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int i;
	for(i=3; i<=100 ; i+=3) //i+=3 equivale a i = i+3
		printf("%d\t", i);
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
	
}
