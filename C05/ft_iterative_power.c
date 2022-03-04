/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:08:06 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 21:06:45 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create an iterated function that returns the value of a power applied to a nu * mber. An power lower than 0 returns 0. Overflows must not be handled.
 * We’ve decided that 0 power 0 will returns 1
 * Here’s how it should be prototyped :
 * int ft_iterative_power(int nb, int power);
 */

int		ft_iterative_power(int x, int y)
{
	int		counter;
	

	counter = 0;
	if (y = 0)
		return 1;
	while (counter < y)
	{
		x = x * x;
		counter++;
	}
}

int main()
{
	int		x = 2;
	int		y = 4;

	printf("%d\n", ft_iterative_power(x, y))
}
