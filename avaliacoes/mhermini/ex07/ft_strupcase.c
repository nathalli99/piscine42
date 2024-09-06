/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:22:38 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:11:00 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
#include <stdio.h>
#include <string.h> */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (((str[count] >= 'a' && str[count] <= 'z')))
		{
			str[count] = str[count] - 32;
		}
	count ++;
	}
	return (str);
}

int	main(void)
{
	char	test1[] = "abcdefghijklmnopqrstuvwxyz";
	char	test2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	test3[] = "HeLLo WoRLd";
	char	test4[] = "";
	char	test5[] = "1234567890";

	printf("T-1: %s Should be: ABCDEFGHIJKLMNOPQRSTUVWXYZ\n", ft_strupcase(test1));
	printf("T-2: %s Should be: ABCDEFGHIJKLMNOPQRSTUVWXYZ\n", ft_strupcase(test2));
	printf("T-3: %s Should be: HELLO WORLD\n", ft_strupcase(test3));
	printf("T-4: %s Should be: \n", ft_strupcase(test4));
	printf("T-5: %s Should be: 1234567890\n", ft_strupcase(test5));
}

