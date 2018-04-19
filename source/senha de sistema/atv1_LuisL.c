#include<stdio.h>
#include<stdlib.h>

main (){

     int senha_secreta, user_senha;
     senha_secreta = 123456;
     
     while (1){
           printf("\n Digite a senha:");
           scanf("%d", &user_senha);
           
           if (user_senha==senha_secreta){
                                          
                                          printf("\nSenha Correta!\n");
                                          printf("\nSistema Liberado!\n\n"); 
                                          system ("pause");
                                          exit (0);
                                          }
           else {
                printf("\nsystem error!\n");
                printf("\nSenha errada, tente novamente\n\n");
                system("pause"); system("cls"); 
                }// fim else
                                
                }//fim while
           
           }//fim main
           
