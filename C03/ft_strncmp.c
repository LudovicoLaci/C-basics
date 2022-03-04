/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:50:39 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 17:15:57 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strncmp (man strncmp)
 * Here’s how it should be prototyped :
 * 
 * int		ft_strcmp(char *s1, char *s2, unsigned int n);
 */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		counter;

	counter = 0;
	if (*s1 == '\0')
		return *s1 - *s2;
	while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0') && counter < n - 1)
		{
			s1++;
			s2++;
			counter++;	
		}
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		return *s1 - *s2;
}

int main (void)
{
	char	*s1;
	char	*s2;
	
	s1 = "abcfef";
	s2 = "abcdre";
	
	printf("%d\n", ft_strncmp(s1, s2, 4));
	return(0);	
}
