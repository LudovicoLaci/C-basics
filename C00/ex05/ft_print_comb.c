#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	j = '1' - 1;
	k = '2' - 1;
	while (i++ < '7')
	{
		j = i;
		while (j++ < '8')
		{
			k = j;
			while (k++ < '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int main(void)
{
	ft_print_comb();
	return(0);
}
