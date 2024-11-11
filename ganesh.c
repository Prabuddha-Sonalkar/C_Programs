#include<stdio.h>





int main( )                               

{

int i , j , k;



 



for(i=0;i<5;i++)

{

printf("%*s",35);

for(j=i ;j<5;j++)

{

printf(" ");                                                        

}

for(k=0;k<((2*i)-1);k++)

{

printf("\033[1;32m");                                              

printf("*");

}

printf("\n");

                                                       

}

 



for(i=0;i<4;i++)

{

printf("%*s",31);

for(j=0; j<i; j++)

{

printf(" ");

}

for(j=i ;j<4;j++)

{

printf("\033[1;31m");                                      

printf("#");

}

printf("%*s",1);

for(j=1;j<8; j++)

{

printf("\033[1;33m");                                         

printf("@");

}

printf("%*s",1);

for(j=i; j<4;j++)

{

printf("\033[1;31m");

printf("#");

}

printf("\n");



}



for(i=0; i<2; i++)

{

printf("%*s",38);

for(j=0; j<4; j++)

{

printf("\033[1;33m");

printf("@");

}

printf("\n");



}

 

for(i=0; i<3; i++)

{

printf("%*s",39);

for(j=0; j<i; j++)

{

printf(" ");

}

for(k=0; k<3; k++)

{

printf("\033[1;33m");

printf("@");

}

printf("\n");



}

 

for(i=0; i<2;i++)

{

printf("%*s",42);

for(j=0; j<i ;j++)

{

printf(" ");

}

for(k=0; k<2; k++)

{

printf("\033[1;33m");

printf("@");

}

printf("\n");



}

 

printf("%*s",45);

printf("\033[1;33m");

printf("@");


                                                                              

}