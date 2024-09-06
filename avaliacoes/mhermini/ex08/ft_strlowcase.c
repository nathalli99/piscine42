/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:22:38 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:14:54 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (((str[count] >= 'A' && str[count] <= 'Z')))
		{
			str[count] = str[count] + 32;
		}
	count ++;
	}
	return (str);
}

int	main(void)
{
	char	test1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	test2[] = "abcdefghijklmnopqrstuvwxyz";
	char	test3[] = "vai corinthians";
	char	test4[] = "";
	char	test5[] = "1234567890";

	printf("T-1: %s Should be: abcdefghijklmnopqrstuvwyxz\n", ft_strlowcase(test1));
	printf("T-2: %s Should be: abcdefghijklmnopqrstuvwyxz\n", ft_strlowcase(test2));
	printf("T-3: %s Should be: vai corinthians\n", ft_strlowcase(test3));
	printf("T-4: %s Should be: \n", ft_strlowcase(test4));
	printf("T-5: %s Should be: 1234567890\n", ft_strlowcase(test5));
}

