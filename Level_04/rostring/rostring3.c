

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int end;
	int start;
	
	if(ac > 1)
	{
		while(av[1][i] == ' ' ||av[1][i] == '\t')
			i++;
		start=i;
		while(!(av[1][i] >= 9 && av[1][i] <= 13 || av[1][i] == ' ' || av[1][i] == '\0'))
			i++;
		end=i;
		while(av[1][i])
		{
			if(av[1][i] > 32)
			{
				write(1,&av[1][i],1);
				if(av[1][i+1] == ' ')
					write(1," ",1);
				i++;
			}
			else 
				i++;
		}
		write(1," ",1);
		while(start < end)
		{
			write(1,&av[1][start],1);
			start++;
		}
	}
	write(1,"\n",1);
}
