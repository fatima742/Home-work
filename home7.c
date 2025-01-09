#include <stdio.h>
void string(char *str){
    
    for (int i = 0; i < 1; i++)
    {
        printf("%s\n",str);
    }
    
}
int main ()
{
    char str [7]="fatima";
    char *s = str;
    string(s);
    return(0);
}



