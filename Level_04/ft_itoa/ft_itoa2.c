#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;
    char *arg;

    if(n <= 0)
        len++;
    while(n)
    {
        n /= 10;
        len++;
    }
    arg = (char *)malloc(sizeof(char) * (len + 1));
    if(!arg)
        return(NULL);
    arg[len] = '\0';
    if(nbr == 0)
    {
        arg[0] = '0';
        return(arg);
    }
    if(nbr < 0)
    {
        arg[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        arg[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return(arg);
}
