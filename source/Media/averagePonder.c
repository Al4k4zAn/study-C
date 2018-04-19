#include<stdio.h>
#include<stdlib.h>

main(){
	
	float mediaPrimeiroBim, mediaSegundoBim, mediaFinalSem;
	char resp;
	
	resp = 's';
	
	while (resp == 's' || resp == 'S'){
		
		printf("\nDigite a Nota do primeiro Bimestre:\t");
			scanf("%f",&mediaPrimeiroBim);
	
		printf("\nDigite a Nota do segundo Bimestre:\t");
			scanf("%f",&mediaSegundoBim);
	
				//formula que calcula a média final ponderada
				mediaFinalSem = (mediaPrimeiroBim * 0,4)+(mediaSegundoBim * 0.6);
	
		printf("\nSua media Final foi :\t %2.f\n\n",mediaFinalSem);
		

	}
	
	
system("pause");

		
}
