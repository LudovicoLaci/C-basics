/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:27:37 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 15:00:44 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
			return(0);
		else
			str++;

	}
	return(1);
}

int main(void)
{
	char	*str;
	
	str = "iierjijgj\x01";
	printf("%d\n", ft_str_is_printable(str));
	return(0);
}
