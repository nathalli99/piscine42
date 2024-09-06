/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:29:45 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:01:08 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'a' && str[count] <= 'z')))
		{
			return (0);
		}
	count ++;
	}
	return (1);
}

int	main(void)
{
	printf("Test 1: %d Should be: 1\n", ft_str_is_lowercase("hello"));
	printf("Test 2: %d Should be: 0\n", ft_str_is_lowercase("Hello"));
	printf("Test 3: %d Should be: 1\n", ft_str_is_lowercase(""));
	printf("Test 4: %d Should be: 0\n", ft_str_is_lowercase("hello123"));
	printf("Test 5: %d Should be: 1\n", ft_str_is_lowercase("abcxyz"));
	printf("Test 6: %d Should be: 0\n", ft_str_is_lowercase("abcXYZ"));
	printf("Test 7: %d Should be: 0\n", ft_str_is_lowercase("hello!"));
	printf("Test 8: %d Should be: 0\n", ft_str_is_lowercase("hello world"));
	printf("Test 9: %d Should be: 1\n", ft_str_is_lowercase("abc"));
	printf("Test 10: %d Should be: 0\n", ft_str_is_lowercase("abc1"));
}

