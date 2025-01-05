#include<stdio.h>
int main()
{
    int x,y;
    for ( x = 1; x < 6; x++)
    {  
      for ( y = 1; y <11; y++)     
       { if (x==1)
       { printf("#");}
       else if (x==5)
       { printf("#");}   
        else
        {
            for ( y = 1; y < 11; y++)
            {  
                if (y==1)
                {
                 printf("#");
                }
               else if (y==10)
               {
                 printf("#");
               }
               else
               {
                 printf("*");
               }
            }
        }
       }
      printf("\n");   
    }  
    return(0);
}