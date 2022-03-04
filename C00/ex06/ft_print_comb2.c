#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(unsigned int n)
{
        if (n > 10)
                ft_putnbr(n / 10);

                if (n == 10)
                        ft_putchar('1');
        
	ft_putchar(n % 10 + '0');
}


void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0 - 1;
	b = 0 - 1;

	while (a++ < 99)
	{
		b = a;
		while (b++ < 99)
		{
			if (a < 10)
			{
				ft_putchar('0');
			}
			ft_putnbr(a);
			ft_putchar(' ');
			if (b < 10)
			{
				ft_putchar('0');
			}
			ft_putnbr(b);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
