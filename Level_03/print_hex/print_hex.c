#include <unistd.h>

int ft_atoi(char *str)
{
	int num = 0;
	int sign = 1;
	
	while(*str <= 32)
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' || *str == '+')
		str++;
	while(*str <= '9' && *str >= '0')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (sign*num);
	
}

void print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";
	
	if(n >= 16)
		print_hex(n / 16);
	write(1,&hex_digits[n % 16],1);
}

int main(int ac, char **av)
{
	if(ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1,"\n",1);
}
