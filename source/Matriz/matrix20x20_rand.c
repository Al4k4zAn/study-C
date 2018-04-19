#include<time.h>
#include<stdio.h>


main(){
       int m[20][20],x,y;
       srand(time(NULL));
              
       for(y=0;y<20;y++){
           for(x=0;x<20;x++){
              m[x][y]=rand()%50;              
           }
       }         
                            
      for(x=0;x<20;x++){
           for(y=0;y<20;y++){
               printf(" %2d",m[x][y]);                                             
               }
               printf("\n");
               }                         
                                      
     
       system("pause");
      
       
       }
