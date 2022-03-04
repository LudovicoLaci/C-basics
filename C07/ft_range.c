/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:33:18 by llaci             #+#    #+#             */
/*   Updated: 2021/03/18 19:27:51 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{	
	int		*tab;
	int		*start_tab;

	if (min >= max)
		return(NULL);
	tab = malloc(sizeof(min) * (max - min));
	start_tab = tab;
	while (min <= max-1)
	{
		*tab = min;
		tab++;
		min++;
	}
	return(start_tab);
}

int		main(void)
{	
	int		i = 7;
	int		j = 13;
	int		k = 0;
	while (k < j-i)
	{
		printf("%d | ", ft_range(i,j)[k]);
		k++;
	}
	printf("\n");
	return(0);
}
