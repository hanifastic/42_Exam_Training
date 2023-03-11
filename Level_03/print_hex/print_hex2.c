#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int num = 0;
    while(str[i] && str[i] <= '9' && str[i] >= '0')
        num = (num * 10) + (str[i++] - '0');
    return(num);
}

void print_hex(int nb)
{
    if(nb > 15)
        print_hex(nb / 16);
    write(1,&"0123456789abcdef"[nb % 16],1);
}

int main(int ac, char **av)
{
    if(ac==2)
        print_hex(ft_atoi(av[1]));
    write(1,"\n",1);
}
