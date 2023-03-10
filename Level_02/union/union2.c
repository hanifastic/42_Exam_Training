#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int i2 = 0;
    char kontrol[256] = {0};
    if(ac==3)
    {
        while(av[1][i])
        {
            i2 = 0;
            while(av[2][i2])
            {
                if(kontrol[(int)av[1][i]] != 1)
                {
                    kontrol[(int)av[1][i]] = 1;
                    write(1,&av[1][i],1);
                }
                i2++;
            }
            i++;
        }
        i = 0;
        i2 = 0;
        while(av[2][i2])
        {
            i = 0;
            while(av[1][i])
            {
                if(kontrol[(int)av[2][i2]] != 1)
                {
                    kontrol[(int)av[2][i2]] = 1;
                    write(1,&av[2][i2],1);
                }
                i++;
            }
            i2++;
        }
    }
    write(1,"\n",1);
}
