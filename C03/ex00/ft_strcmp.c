/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:11:49 by natribei          #+#    #+#             */
/*   Updated: 2024/09/04 23:26:40 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] != '\0') && (s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (s1[index] - s2[index]);
}
/*#include <stdio.h>
int	main(void)
{
	char	str1[] = "zebra";
	char	str2[] = "mango";
	char	str3[] = "pen";
	char	str4[] = "pen";
	char	str5[] = "pencil";

	printf("return positive: %d\n", ft_strcmp(str1, str2));
	printf("return negative: %d\n", ft_strcmp(str4, str5));
	printf("return zero: %d\n", ft_strcmp(str3, str4));
}*/
