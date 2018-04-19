/*imprimir todos os numeros impares de 0 a 100
@uthor: ItzRike
DEC-2013
*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int i,j,k;
	for (i = 0, j = i, k = j; i < 100; i++, j++, k++);
		printf("%d\t", i+j+k);
		
	printf("\n");
	system("pause");
	return 0;
}
