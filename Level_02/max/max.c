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
