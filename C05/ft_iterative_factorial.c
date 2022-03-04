/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:07:29 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 21:06:34 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create an iterated function that returns a number. This number is the result  * of a factorial operation based on the number given as a parameter.
 * If the argument is not valid the function should return 0.
 * Overflows must not be handled, the function return will be undefined.
 * Here’s how it should be prototyped :
 * int ft_iterative_factorial(int nb);
 */

#include <stdio.h>

int factorial(int n)
{
	if (n < 0)
		return (0);
    if (n == 0)
    	return 1;
    int 	i;
	int		fact;

	i = n;
	fact = 1;
    while (n / i != n) 
	{
        fact = fact * i;
        i--;
    }
    return fact;
}

int main()
{
    int num = 9;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
