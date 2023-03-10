#include <stdio.h>
#include <stdlib.h>

int pgcd(unsigned int a, unsigned int b)
{
    int i = a;
    while(i)
    {
        if(a % i == 0 && b % i == 0)
            return(i);
        i--;
    }
}

int main(int ac, char **av)
{
    if(ac==3)
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);

        if(a <= 0 || b <= 0)
            return(0);
        printf("%d",pgcd(a,b));
    }
    printf("\n");
}
