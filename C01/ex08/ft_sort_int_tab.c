/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:41:17 by llaci             #+#    #+#             */
/*   Updated: 2021/03/10 14:41:49 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	
	i = 0; 
	while (i < size)
	{
		if (*(tab + i) <= *(tab + (i + 1)))
		{
			i++;
		}
		else
		{
			ft_swap((tab + i), (tab + (i + 1)));
			i = 0;
		}
	}
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}

int		main(void)
{
	int		tab[5];

	tab[0] = 1;
	tab[1] = 8;
	tab[2] = 13;
	tab[3] = 11;
	tab[4] = 19;

	ft_sort_int_tab(tab, 5);
	return(0);
}
