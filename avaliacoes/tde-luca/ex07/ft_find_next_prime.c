/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:01:56 by tde-luca          #+#    #+#             */
/*   Updated: 2024/09/04 21:05:15 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	primo;

	i = 2;
	primo = 0;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
	{
		nb ++;
	}
	return (nb);
}
#include<stdio.h>
int	main(void)
{
	printf("Use case 1: %d should be: 2\n", ft_find_next_prime(-5));
	printf("Use case 2: %d should be: 2\n", ft_find_next_prime(0));
	printf("Use case 3: %d should be: 2\n", ft_find_next_prime(1));
	printf("Use case 4: %d should be: 2\n", ft_find_next_prime(2));
	printf("Use case 5: %d should be: 3\n", ft_find_next_prime(3));
	printf("Use case 6: %d should be: 5\n", ft_find_next_prime(4));
	printf("Use case 7: %d should be: 7\n", ft_find_next_prime(6));
	printf("Use case 8: %d should be: 11\n", ft_find_next_prime(9));
	printf("Use case 9: %d should be: 101\n", ft_find_next_prime(100));
	printf("Use case 10: %d should be: 29\n", ft_find_next_prime(28));
	return (0);
}
