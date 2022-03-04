/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:08:17 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 21:06:52 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a recursive function that returns the value of a power applied to a number.
 * Overflows must not be handled, the function return will be undefined.
 * We’ve decided that 0 power 0 will returns 1
 * Here’s how it should be prototyped :
 * int ft_recursive_power(int nb, int power);
 * #include<stdio.h>

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}

/* Program to test function power */
int main()
{
    int x = 2;
    unsigned int y = 3;

    printf("%d", power(x, y));
    return 0;
}
