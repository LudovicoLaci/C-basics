/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:01:06 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 17:13:01 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return(start);
}

int main(void)
{
	char str[] = "HUDIJGKoki45%^&*(";

	printf("%s\n", ft_strlowcase(str));
	return(0);
}
