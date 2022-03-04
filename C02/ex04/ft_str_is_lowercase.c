/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:26:24 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 14:16:36 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ( !(*str >= 97 && *str <= 122))
			return(0);
		else
			str++;
	}
	return(1);
}

int main(void)
{
	char	*str;
	
	str = "iRKJTI";
	printf("%d\n", ft_str_is_lowercase(str));
	return(0);
}
