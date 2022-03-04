/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:23:05 by llaci             #+#    #+#             */
/*   Updated: 2021/03/10 11:36:08 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int main(void)
{
	char	*str;
	int		len;

	str = "Hello 42";
	len = ft_strlen(str);
	printf("%d\n", len);
	return(0);
}
