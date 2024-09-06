/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:32:40 by tde-luca          #+#    #+#             */
/*   Updated: 2024/09/04 21:04:06 by natribei         ###   ########.fr       */
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
#include<stdio.h>
int	main(void)
{
	printf("Use case 1: %d should be: 0 - not prime\n", ft_is_prime(-5));
	printf("Use case 2: %d should be: 0 - not prime\n", ft_is_prime(0));
	printf("Use case 3: %d should be: 0 - not prime\n", ft_is_prime(1));
	printf("Use case 4: %d should be: 1 - prime\n", ft_is_prime(2));
	printf("Use case 5: %d should be: 1 - prime\n", ft_is_prime(3));
	printf("Use case 6: %d should be: 0 - not prime\n", ft_is_prime(4));
	printf("Use case 7: %d should be: 1 - prime\n", ft_is_prime(5));
	printf("Use case 8: %d should be: 0 - not prime\n", ft_is_prime(9));
	printf("Use case 9: %d should be: 1 - prime\n", ft_is_prime(11));
	printf("Use case 10: %d should be: 0 - not prime\n", ft_is_prime(15));
	return (0);
}
