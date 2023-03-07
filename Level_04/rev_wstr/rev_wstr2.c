#include <unistd.h>

int main(int ac, char **av)
{
    int start;
    int end;
    int i = 0;
    int flg = 1;

    if(ac==2)
    {
        while(av[1][i])
            i++;
        while(i >= 0)
        {
            while(av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
                i--;
            end = i;
            while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            start = i + 1;
            flg = start;
            while(start <= end)
                write(1,&av[1][start++],1);
            if(flg != 0)
                write(1," ",1);
        }
    }
    write(1,"\n",1);
}
