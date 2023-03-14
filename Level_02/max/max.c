
int max(int *tab, unsigned int len)
{
    if(len == 0 || !tab)
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
}
