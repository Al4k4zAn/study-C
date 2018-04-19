#include <stdio.h>
#include <stdlib.h>
main() {
         char sexo;
         float peso, altura, imc;
         
               printf("\nDigite o seu Peso em Kg:");
               scanf("%f",&peso);
               printf("\n\nDigite a sua altura em m:");
               scanf("%f",&altura);
               printf("\n\nDigite F para feminino ou M para masculinho:");
               scanf("%c",&sexo);
               
               imc=peso/(altura*altura)
               
               switch (sexo)
               
                      case 'f': 
                           if(imc<19.1){
                                        printf("\nSeu IMC é = %f",imc);
                                        printf("\nVoce esta abaixo do peso");              
                                        }
                           else{
                                if(imc==19.1 || imc<25.8){
                                        printf("\nSeu IMC é = %f",imc);
                                        printf("\nVoce esta no peso normal");              
                                        }
                                        else{
                                             if(imc==25.8 || imc<27.3){
                                                          printf("\nSeu IMC é = %f",imc);
                                                          printf("\nVoce esta marginalmente acima do peso");              
                                                          }
                                                          else{
                                                               if(imc==27.3 || imc<32.3){
                                                                            printf("\nSeu IMC é = %f",imc);
                                                                            printf("\nVoce esta acima do peso ideal");              
                                                                            }
                                                                            else{
                                                                                 printf("\nSeu IMC é = %f",imc);
                                                                                 printf("\nVoce esta obeso");              
                                                                                 }
                                                               
                                                               }
                                             
                                             
                                             }
                               
                                }
                                        
                                        
         }
