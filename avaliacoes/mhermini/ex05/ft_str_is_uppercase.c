/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:36:07 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:04:36 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'A' && str[count] <= 'Z')))
		{
			return (0);
		}
	count ++;
	}
	return (1);
}

int	main(void)
{
	printf("Test 1: %d Should be: 1\n", ft_str_is_uppercase("HELLO"));
	printf("Test 2: %d Should be: 0\n", ft_str_is_uppercase("Hello"));
	printf("Test 3: %d Should be: 1\n", ft_str_is_uppercase(""));
	printf("Test 4: %d Should be: 0\n", ft_str_is_uppercase("HELLO123"));
	printf("Test 5: %d Should be: 1\n", ft_str_is_uppercase("ABCXYZ"));
	printf("Test 6: %d Should be: 0\n", ft_str_is_uppercase("ABCxyz"));
	printf("Test 7: %d Should be: 0\n", ft_str_is_uppercase("HELLO!"));
	printf("Test 8: %d Should be: 0\n", ft_str_is_uppercase("HELLO WORLD"));
	printf("Test 9: %d Should be: 1\n", ft_str_is_uppercase("ABC"));
	printf("Test 10: %d Should be: 0\n", ft_str_is_uppercase("ABC1"));
}
