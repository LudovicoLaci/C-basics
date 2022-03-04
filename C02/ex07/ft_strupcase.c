/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:35:19 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 16:47:55 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strupcase(char *str)
{	
	char *start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;

	}
	return(start);
}

int main(void)
{
	char str[] = "ab1254KJDU";

	printf("%s\n", ft_strupcase(str));
	return(0);
}
