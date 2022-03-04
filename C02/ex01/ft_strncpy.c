/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:31:32 by llaci             #+#    #+#             */
/*   Updated: 2021/03/11 09:28:07 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return(i + 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < ft_strlen(src) || counter < n)
	{
		if (counter < n && counter < ft_strlen(src))
		{	
			*(dest + counter) = *(src + counter);
			counter++;
		}
		else
		{
			*(dest + counter) = '\0';
			counter++;
		}

	}
	return(dest);
}

int main(void)

{
	unsigned int	n;
	char	str[] = "Salut";
	char	dst[] = "";

	n = 2;
	ft_strncpy(dst, str, n);
	//strncpy(dst, str, n);
	printf("%s\n", dst);	
	return(0);

}
