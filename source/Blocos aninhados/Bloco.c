/*Programa com um bloco dentro do outro*/
#include <stdio.h>
#include <stdlib.h>

main(){
	int i=5;
	{/*inicio do bloco*/
		int i=150;
		printf("%d\n", i);/*imprimi 150*/
		
	}/*fim do bloco*/
printf("%d\n",i); /*imprimi 5*/

system("pause");
return 0;
}

