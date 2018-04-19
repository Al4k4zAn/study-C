#include <stdio.h>
#include <stdlib.h>

main () {
     
     int password = 987654, valida = 0;
     int user_senha = 0, chance = 3;
     
         while(chance>0 && valida == 0) {
                                     
                                     printf("\ndigite a Senha:");
                                     scanf("%d", &user_senha);
                                     
                            if (password == user_senha)
                            
                                 {
                                 printf("\nSistema Liberado!");
                                 valida = 1;
                                 system("pause>>null"); system("cls");
                                 }
                                 
                            else{
                                 chance--; 
                                 printf("\nError! Senha errada");
                                 printf("\nVoce ainda tem %d tentativas", chance);
                                 system("pause>>null"); system("cls");
                                 }    
                        
                                 }
                        
                        
                        }
