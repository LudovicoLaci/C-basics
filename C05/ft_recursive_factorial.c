/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:07:31 by llaci             #+#    #+#             */
/*   Updated: 2021/03/15 21:06:42 by llaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a recursive function that returns the factorial of the number given as * a parameter.
 * If the argument is not valid the function should return 0.
 * Overflows must not be handled, the function return will be undefined.
 * Here’s how it should be prototyped :
 * int ft_recursive_factorial(int nb);
 */

int factorial(int n)
{
	if (n < 0)
		return 0;	
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
