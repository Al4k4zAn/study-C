/*
*Programa desenvolvido em 21-08-2013
*Faculdade de Ciências da Computação Anhanguera - FAC3
*Campinas - SP
*@utor = LuisL
*/

#include <stdio.h>
#include <stdlib.h>

         main(){   //inicio
                           //declaracao de variaveis
                   int idade;
                   float altura, peso;
                   char sexo;
                           //comando I/O
                   printf("\nDigite sua idade:");
                   scanf("%d",&idade);
                   printf("\nQual o seu peso em Kg:");
                   scanf("%f",&peso);
                   printf("\nDigite sua altura:");
                   scanf("%f",&altura);
                   printf("\nDigite F(feminino) ou M (masculino):");
                   scanf(" %c",&sexo);
                   printf("\nVoce tem %fm de altura\n", altura);
                   printf("\nSua idade eh: %d\n",idade);
                   printf("\nSeu sexo eh: %c\n",sexo);
                   printf("\n\n fim \n\n");
                   
         system("pause>>null");
                            
                }
