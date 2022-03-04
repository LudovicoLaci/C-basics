/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:32:48 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 17:15:49 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strstr (man strstr).
 * Here’s how it should be prototyped :
 *
 * char *ft_strstr(char *str, char *to_find);
 */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{	
	char	*start;
	int		answer;
	
	answer = 1;
	if (*to_find == '\0')
		return(str);

	while (*str != '\0')
	{
		if (*to_find == *str)
		{	
			start = str;
			while (*to_find != '\0')
			{

				if (*(to_find + 1) != *(str + 1))
					answer = 0;
				else	
					answer = 1;
			}
		}
		else
			answer = 0;
			str++;
	}
	if (answer == 0)
		return(NULL);
	else
		return(start);
}

int		main(void)
{
	char	*haystack;
	char	*needle;

	haystack = "Hello World 4587";
	needle = "Wor";

	printf("%s\n", ft_strstr(haystack, needle));
	return(0);

}
