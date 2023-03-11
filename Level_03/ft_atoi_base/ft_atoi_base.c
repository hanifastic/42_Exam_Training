int ft_atoi_base(const char *str, int base)
{
    int i = 0;
    int pozneg = 1;
    int res = 0;
    int digit;

    while(str[i] && str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-')
    {
        pozneg *= -1;
        i++;
    }

    while(str[i])
    {
        if(!((str[i] >= '0' && str[i] <= '9' ||) ||
         (str[i] >= 'a' && str[i] <= 'f') ||
          (str[i] >= 'A' && str[i] <= 'F')))
            retur(0);
        if(str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'f')
            digit = (char)str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] >= 'F')
            digit = (char)str[i] - 'A' + 10;
        if(digit > base)
            return(0);
        
        res = (res * base) + digit;
        i++;
    }
    return(res * pozneg);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n", ft_atoi_base("ff", 16));
}
*/
