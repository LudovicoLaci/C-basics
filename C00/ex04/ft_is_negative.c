#include <unistd.h>

void	ft_is_negative(int i)
{
	char n;
	char p;

	n = 'N';
	p = 'P';
	if (i < 0)
		write(1, &n, 1);
	else
		write(1, &p, 1);
}

int main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
}
