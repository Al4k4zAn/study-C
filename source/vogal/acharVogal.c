#include<stdio.h>
#include<stdlib.h>

main(){
       char lt;
       
            printf("\nDigite uma letra:");
            scanf("%c",&lt);
            
            if(lt=='a' || lt=='e'|| lt=='i' || lt=='o'|| lt=='u'){
            
                     printf("\nVoce digitou uma vogal, ela e = %c",lt);
                     system("pause");
                     system("cls");
                     }
            else {
                 printf("\nVoce nao digitou uma vogal, veja= %c",lt);
                 system("pause");
                 system("cls");
                 }
       
       
       
       
       }
