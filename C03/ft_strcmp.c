/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:20:48 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 17:16:00 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of strcmp (man strcmp)
 * Here's how it should be prototyped:
 *
 * int		ft_strcmp(char *s1, char *s2);
 */
#include <stdio.h>

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

int main(void)
{
	char	*s1;
	char	*s2;

	s1 = "a";
	s2 = "a";

	printf("%d\n", ft_strcmp(s1, s2));
	return(0);
}
