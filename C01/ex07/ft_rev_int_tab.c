/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:38:26 by llaci             #+#    #+#             */
/*   Updated: 2021/03/10 12:33:57 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int 	rev_tab[size];

	i = 0;
	while (i < size)
	{
		*(rev_tab + i) = *(tab + (size - 1) - i);
		i++;
	}
	printf("%d%d%d%d%d", rev_tab[0], rev_tab[1], rev_tab[2], rev_tab[3], rev_tab[4]);
}

int		main(void)
{
	int		tab[5];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;

	ft_rev_int_tab(tab, 5);
	return(0);
}
