int max(int *tab, unsigned int len)
{
	int maxx = 0;
	if(!tab)
		return(0);
	while(len--)
	{
		if(tab[len] > maxx)
			maxx = tab[len];
	}
	return(maxx);
}


/*
int max(int *tab, unsigned int len)
{
    if(len == 0)
        return(0);
    int i = 0;
    int result = tab[0];
    while(i < len)
    {   
        if(result < tab[i])
            result = tab[i];
        i++;
    }
    return(result);
}*/
