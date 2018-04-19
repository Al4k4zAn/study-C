#include<stdio.h>
#include<stdlib.h> //bibliotecas de comandos

main (){
     while (1){
     float nota1, nota2, media;
            printf("\nDigite a nota do 1 Bimestre: ");
            scanf("%f",&nota1);
            printf("\nDigite a nota do 2 Bimestre: ");
            scanf("%f",&nota2);
     
                               media=(nota1+nota2)/2;
     
     if(media > 4.75){
              printf("\nAprovado!!!\n\n");     
              system ("pause");             
              system ("cls"); //limpa             
                     }
     else {
          printf("\nReprovado!!!\n\n");
          system ("pause");             
          system ("cls");
          }
     
       }
                      
     }
