#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<=5;i++)
    {
        for ( j = 0; j <=5; j++)
        {
            if(i<4 && j==1)
            {
                printf("\t*");
            }
        

      
            if(j<=4 && i==1)
            {
                printf("*");
                printf("\n");
            }
        
        
    

      
            if(i<=4 && j==5)
            {
                printf("*");
            }
        
        
    


            // if(i==5 && j<=3)
            // {
            //     printf("*");
            //     printf("\n");
            // }
        }
    }
        
}
   
