/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:18:54 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 13:25:44 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ( !(*str >= 48 && *str <= 57) )
			return(0);
		else
			str++;
	}
	return(1);
}

int main(void)
{
	char	 *str_chain;

	str_chain = "84479j";
	printf("%d\n",ft_str_is_numeric(str_chain));
	return(0);
}
