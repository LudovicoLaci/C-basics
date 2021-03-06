/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:43:34 by llaci             #+#    #+#             */
/*   Updated: 2021/03/17 19:12:33 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	if (argc != 1)
	{
		while (i >= 0)
        {
            if (i != 0)
            {
                ft_putstr(argv[i]);
				ft_putchar('\n');
            }
            i--;
        }
	}
}
