/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:32:06 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 17:15:55 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strcat (man strcat).
 * Here’s how it should be prototyped :
 *
 * char 	*ft_strcat(char *dest, char *src);
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

char		*ft_strcat(char *dest, char *src)
{	
	char	*start;
	int		counter_jump;

	counter_jump = (ft_strlen(dest) - 1);
	start = dest;
	while (*src != '\0')
	{	
		*(dest + counter_jump) = *src;
		dest++;
		src++;
	}
	*(dest++ + counter_jump) = '\0';
	return(start);
}

int		main(void)
{
	char	s1[] = "abc";
	char	*s2;

	s2 = "hijk";
	printf("%s\n",ft_strcat(s1, s2));
	return(0);
}
