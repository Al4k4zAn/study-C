#include <stdio.h>
main(){
       /*Declaração de variaveis*/
       /*Inteiros, matriz de 3 linhas e 5 colunas, 
       variavel L(para linha), Variavel C(para colunas)*/
       int m[3][5],L,C;
       /*Laço for para 3 linhas*/
       for(L=0;L<3;L++){
                        printf("\nLinha %d", L+1);
                        for(C=0;C<5;C++){
                                         printf("\nColuna %d",C+1);
                                         m[L][C]=0;
                                         
                                         }
                        
                        }
       //mostrando sem formato
       
       printf("\n");
       for(L=0;L<3;L++){
        for(C=0;C<5;C++)
          printf("%d",m[L][C]);
          printf("\n");
          }
       
       system("pause");
       }
