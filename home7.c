#include <stdio.h>
void string(char *str)
{
    printf("%s",str);
   
}
int main ()
{
    char str []="fatima";
    char *s = str;
    string(s);
    return(0);
}



