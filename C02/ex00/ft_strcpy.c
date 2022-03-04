/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:51:37 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 09:28:03 by llaci            ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i < ft_strlen(src))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	
	printf("%s\n", dest);
	return(dest);
}


int main(void)
{
	char str[] = "Sqlut Mqrie ?/<,$%";
	char dst[] = "";

	ft_strcpy(dst, str);
	return(0);


}
