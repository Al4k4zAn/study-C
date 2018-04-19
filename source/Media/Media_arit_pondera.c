#include<stdio.h>
#include<stdlib.h>

main(){
       float nota1, nota2, media;
       
       printf("\nDigite nota da prova 1:");
       scanf("%f", &nota1);
       printf("\nDigite nota da prova 2:");
       scanf ("%f", &nota2);
       
       media = ((nota1*4)+(nota2*6))/10;
       
       printf("\nSua media Aritimetica ponderada e: %f", media);
       
       system ("pause<<null");  
       
       }
