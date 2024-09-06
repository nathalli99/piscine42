/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:11:06 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/25 23:57:32 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= '0' && str[count] <= '9')))
		{
			return (0);
		}
	count ++;
	}
	return (1);
}

int main(void)
{
	printf("Test 1: %d Should be: 1\n", ft_str_is_numeric("123456"));
	printf("Test 2: %d Should be: 0\n", ft_str_is_numeric("123a56"));
	printf("Test 3: %d Should be: 1\n", ft_str_is_numeric(""));
	printf("Test 4: %d Should be: 0\n", ft_str_is_numeric("123 456"));
	printf("Test 5: %d Should be: 1\n", ft_str_is_numeric("000000"));
	printf("Test 6: %d Should be: 0\n", ft_str_is_numeric("123456!"));
	printf("Test 7: %d Should be: 1\n", ft_str_is_numeric("9876543210"));
	printf("Test 8: %d Should be: 0\n", ft_str_is_numeric("12.3456"));
	printf("Test 9: %d Should be: 1\n", ft_str_is_numeric("42"));
	printf("Test 10: %d Should be: 0\n", ft_str_is_numeric("a123456"));
}
