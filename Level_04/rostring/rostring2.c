#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int i2;
    i = 0;
    i2 = 0;

    if(ac == 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
        {
            i++;
            i2 = i;
        }
        while(av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i] != '\0')
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
            {
                while(av[1][i + 1] == ' ' || av[1][i + 1] =='\t')
                    i++;
            }  
            write(1,&av[1][i],1);
            i++;
        }
        if(av[1][i - 1] != ' ')
            write(1," ",1);
        while(av[1][i2] != ' ' && av[1][i2] != '\t')
        {
            write(1,&av[1][i2],1);
            i2++;
        }
    }

    else if(ac > 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
        {
            i++;
            i2 = i;
        }
        while(av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
            i++;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++; 
        while(av[1][i] != '\0')
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
            {
                while(av[1][i + 1] == ' ' || av[1][i + 1] =='\t')
                    i++;
            }  
            write(1,&av[1][i],1);
            i++;
        }
        while(av[1][i2] != ' ' && av[1][i2] != '\t' && av[1][i2] != '\0')
        {
            write(1,&av[1][i2],1);
            i2++;
        }
    }
    write(1,"\n",1);
}
