#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *num;
    int birim;
    int i;
    i = 0;
    if(start > end)
    {
        birim = start - end + 1;
        num = (int *)malloc(sizeof(int) * birim);
        while(i < birim)
        {
            num[i] = end;
            i++;
            end++;
        }
    }
    // else if(start < end)
    // {

    // }
    // else if(start == end)
    // {
    //     return(&start);
    // }

    return(num);
}

int main()
{
    int start = 3;
    int end = 1;
    int i = 0;
    int birim = 3;
    int *gelen;
    gelen = ft_rrange(start,end);
    while(i < birim)
    {
        printf("%i\n",gelen[i]);
        i++;
    }
}


























#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_rrange(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(end - start) + 1);
	while (end > start)
	{
		tab[i] = end;
		end--;
		i++;
	}
	tab[i] = end;
	while (end < start)
	{
		tab[i] = end;
		end++;
		i++;
	}
	tab[i] = end;
	return (tab);
}
