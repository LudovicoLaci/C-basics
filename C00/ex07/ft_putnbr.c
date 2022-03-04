#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
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

int main(void)
{
	ft_putnbr(3);
	ft_putnbr(10);
	ft_putnbr(2345);
}
