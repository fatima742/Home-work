#include <stdio.h>
void string(char str[]){
    int i=0 ;
    for (i = 0; i < 6; i++)
    {
        printf("%c",str[i]);
    }
    
}
int main ()
{
    char str [6]="ftima";
    string(str);
    return(0);
}