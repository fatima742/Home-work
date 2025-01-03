#include <stdio.h>
int main()
{
    int i=1;
    for ( i = 1; i <= 10; i++)
    {
        if (i%2==1)
        {
            printf("%d is odd\n",i);
        }
        else
        printf("%d is even\n",i);
    }
    return(0);
}