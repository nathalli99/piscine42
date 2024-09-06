/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:46:44 by tde-luca          #+#    #+#             */
/*   Updated: 2024/09/04 21:01:12 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include<stdio.h>
int	main(void)
{
	printf("Use case 1: %d should be: 0\n", ft_fibonacci(0));
	printf("Use case 2: %d should be: 1\n", ft_fibonacci(1));
	printf("Use case 3: %d should be: 1\n", ft_fibonacci(2));
	printf("Use case 4: %d should be: 2\n", ft_fibonacci(3));
	printf("Use case 5: %d should be: 3\n", ft_fibonacci(4));
	printf("Use case 6: %d should be: 5\n", ft_fibonacci(5));
	printf("Use case 7: %d should be: 8\n", ft_fibonacci(6));
	printf("Use case 8: %d should be: 13\n", ft_fibonacci(7));
	printf("Use case 9: %d should be: 21\n", ft_fibonacci(8));
	printf("Use case 10: %d should be: -1\n", ft_fibonacci(-3));
	return (0);
}
