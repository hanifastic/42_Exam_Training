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










#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	**ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **tab;

	i = 0;
	i2 = 0;
	tab = (char**)malloc(sizeof(char) * 100);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			i3 = 0;
			tab[i2] = (char*)malloc(sizeof(char) * 100);
			while (str[i] != ' ' && str[i] != '\t' && str[i])
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

int		main(int ac, char **av)
{
	int i;
	char **tab;

	i = 1;
	if (ac > 1)
	{
		tab = ft_split(av[1]);
		while (tab[i])
		{
			ft_putstr(tab[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(tab[0]);
	}
	write(1, "\n", 1);
	return (0);
}
