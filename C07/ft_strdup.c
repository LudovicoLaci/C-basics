/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:30:47 by llaci             #+#    #+#             */
/*   Updated: 2021/03/18 18:33:09 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int			ft_strlen(char *str)
{
	int		length;

	length = 1;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return(length);
}

char		*ft_strdup(char *src)
{
	char		*tab;
	char		*start_tab;

	tab = malloc(sizeof(*src) * ft_strlen(src));
	start_tab = tab;
	while (*src != '\0')
	{
		*tab = *src;
		src++;
		tab++;
	}
	*(tab++) = '\0';
	return(start_tab);
}

int			main(void)
{
	char	*str;
	
	str = "abcdef";
	printf("%p\n", &str);
	printf("%s\n", str);
	printf("%c\n", *str);
	printf("%s\n", str);
	printf("%s\n", ft_strdup(str));
	printf("%p\n", ft_strdup(str));
	free(ft_strdup(str));
	return(0);
}
