/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:17:30 by llaci             #+#    #+#             */
/*   Updated: 2021/03/18 09:59:31 by llaci            ###   ########.fr       */
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

void 	ft_swap(char *a, char *b)
{
	char c;

	c  = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{

	if (*s1 == '\0')
		return *s1 - *s2;
	while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	return *s1 - *s2;

}

int main(int argc, char **argv)
{	
	int		i;

	i = 1; 
	while(i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			ft_swap(argv[i], argv[i + 1]);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return(0);
}
