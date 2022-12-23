#include<unistd.h>
char espaco(char c)
{
	return c == ' ' || c == '\t';
}
int ft_strlen(char *str)
{
	int i;
	int pos;
	i = 0;

	while(str[i])
	{
		i++;
	}
	return i;
}

void	rev_wstr(char *str, int first)
{
	int		start;
	int		i;

	i = ft_strlen(str)-1;

	while(i>0)
	{
		while(espaco(str[i]))
		{
			i--;
		}
		while(!espaco(str[i])&& i >= 0)
		{
			i--;
		}
		start = i;
		start++;
		while(!espaco(str[start]) && str[start])
		{
			write(1,&str[start],1);
			start++;
		}
		while(espaco(str[i]))
		{
			i--;
		}
		if(espaco(str[i + 1]) && i>0)
		{
			write(1," ",1);
		}
	}
	
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1], 1);
	write(1, "\n", 1);
	return (0);
}
