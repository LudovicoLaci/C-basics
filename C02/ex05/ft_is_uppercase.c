/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:17:36 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 14:26:50 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90))
			return(0);
		else 
			str++;		
	}
	return(1);
}

int main(void)
{
	char	*str;

	str = "";
	printf("%d\n", ft_str_is_uppercase(str));
	return(0);
}
