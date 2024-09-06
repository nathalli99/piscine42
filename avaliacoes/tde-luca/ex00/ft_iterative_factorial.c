/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:51:52 by tde-luca          #+#    #+#             */
/*   Updated: 2024/09/04 20:50:23 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		j = j * i;
		i++;
	}
	return (j);
}
#include<stdio.h>
int	main(void)
{
	printf("Use case 1: %d should be: 120\n", ft_iterative_factorial(5));
	printf("Use case 2: %d should be: 1\n", ft_iterative_factorial(0));
	printf("Use case 3: %d should be: 1\n", ft_iterative_factorial(1));
	printf("Use case 4: %d should be: 0\n", ft_iterative_factorial(-5));
	printf("Use case 5: %d should be: 3628800\n", ft_iterative_factorial(10));
	printf("Use case 6: %d should be: 720\n", ft_iterative_factorial(6));
	printf("Use case 7: %d should be: 2\n", ft_iterative_factorial(2));
	printf("Use case 8: %d should be: 479001600\n", ft_iterative_factorial(12));
	printf("Use case 9: %d should be: 40320\n", ft_iterative_factorial(8));
	printf("Use case 10: %d should be: 0\n", ft_iterative_factorial(-3));
	return (0);
}
