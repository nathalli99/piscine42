/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:08:44 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/25 23:53:37 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'A' && str[count] <= 'Z')
				|| (str[count] >= 'a' && str[count] <= 'z')))
		{
			return (0);
		}
	count ++;
	}
	return (1);
}

int	main(void)
{
	printf("Test 1: %d Should be 1\n", ft_str_is_alpha("HelloWorld"));
	printf("Test 2: %d Should be 0\n", ft_str_is_alpha("Hello123"));
	printf("Test 3: %d Should be 1\n", ft_str_is_alpha(""));
	printf("Test 4: %d Should be 0\n", ft_str_is_alpha("Hello World"));
	printf("Test 5: %d Should be 1\n", ft_str_is_alpha("ABCXYZ"));
	printf("Test 6: %d Should be 1\n", ft_str_is_alpha("abcxyz"));
	printf("Test 7: %d Should be 0\n", ft_str_is_alpha("Hello!"));
	printf("Test 8: %d Should be 0\n", ft_str_is_alpha("Test1234Test"));
	printf("Test 9: %d Should be 0\n", ft_str_is_alpha("OláMundo"));
	printf("Test 10: %d Should be 1\n", ft_str_is_alpha("A"));
}

