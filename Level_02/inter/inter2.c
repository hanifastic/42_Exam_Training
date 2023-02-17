#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        char control[256] = {0};
        while(av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if(av[1][i] == av[2][j] && control[av[1][i]] != 1)
                {
                    control[av[1][i]] = 1;
                    write(1,&av[1][i],1);
                }
                j++;
            }
            i++;
        }
    }
    write(1,"\n",1);
}
