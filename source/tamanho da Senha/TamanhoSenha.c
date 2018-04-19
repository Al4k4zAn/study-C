#include<stdio.h>
#include<stdlib.h>

main(){
       while(1){
                int Password, PW;
                
                printf("\nDigite a Senha:");
                scanf("%d",&Password);
                PW = 123456;
                if(Password==PW){
                                 printf("\nSistema Liberado!!\n\n");
                                 system("pause");
                                 exit(0);
                                 }
                                 else{
                                      if(Password>PW){
                                                      printf("\nSenha muito grande!!!\n\n");
                                                      printf("\nDigite novamente\n\n");
                                                      system("pause"); system("cls");
                                                   }
                                                   else{
                                                        printf("\nSenha muito pequena!!!\n\n");
                                                        printf("\nDigite novamente\n\n");
                                                        system("pause"); system("cls");
                                                        }
                                      }                
                }
       
       }
