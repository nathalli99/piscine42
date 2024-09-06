/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:38:12 by tde-luca          #+#    #+#             */
/*   Updated: 2024/09/04 21:02:56 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
		return (0);
	while (count < nb / count)
	{
		count++;
	}
	if (count * count == nb)
	{
		return (count);
	}
	return (0);
}

#include<stdio.h>
int	main(void)
{
	printf("Use case 1: %d should be: 0\n", ft_sqrt(0));
	printf("Use case 2: %d should be: 1\n", ft_sqrt(1));
	printf("Use case 3: %d should be: 2\n", ft_sqrt(4));
	printf("Use case 4: %d should be: 3\n", ft_sqrt(9));
	printf("Use case 5: %d should be: 4\n", ft_sqrt(16));
	printf("Use case 6: %d should be: 0\n", ft_sqrt(10));
	printf("Use case 7: %d should be: 5\n", ft_sqrt(25));
	printf("Use case 8: %d should be: 0\n", ft_sqrt(26));
	printf("Use case 9: %d should be: 0\n", ft_sqrt(-4));
	printf("Use case 10: %d should be: 0\n", ft_sqrt(2147483647));
	return (0);
}
