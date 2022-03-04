/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:32:26 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 13:49:50 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strncat (man strncat).
 * Here’s how it should be prototyped :
 *
 * char *ft_strncat(char *dest, char *src, unsigned int nb);
 */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return(i + 1);
}

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;
	int		counter_jump;
	unsigned int		limit;

	limit = 0; 
	counter_jump = (ft_strlen(dest) - 1);
	start = dest;
	while (*src != '\0' && limit < nb)
	{
		*(dest + counter_jump) = *src;
		dest++;
		src++;
		limit++;
	}
	*(dest++ + counter_jump) = '\0';
	return(start);
}

int		main(void)
{
	char	s1[] = "abc";
	char	*s2;

	s2 = "hijk";
	printf("%s\n",ft_strncat(s1, s2, 2));
	return(0);
}

