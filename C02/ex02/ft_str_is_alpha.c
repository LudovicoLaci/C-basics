/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:14:49 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 12:18:12 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
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

int		ft_str_is_alpha(char *str)
{
	int 	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (*(str + counter) >= 65 && *(str + counter) <= 122)
		{
			if (*(str + counter) < 97 && *(str + counter) > 90)
				return(0);
			else
				counter++;
		}
		else 
			return(0);
	}
	return(1);	
}

int main(void)
{
	char	str[] = "okeiuruht[";
	printf("%d\n", ft_str_is_alpha(str));
	return(0);
}
