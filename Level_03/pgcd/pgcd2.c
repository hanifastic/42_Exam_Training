#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int n1 = atoi(av[1]);
    int n2 = atoi(av[2]);
    int temporary = 0;
    if(ac==3)
    {
        if(n1 <= 0 || n2 <= 0)
            return(0);
        while(n1 != 0)
        {
            temporary = n1;
            n1 = n1 % n2;
            n2 = temporary;
        }
        printf("%d\n",n2);
    }
    else
        printf("\n");
}
