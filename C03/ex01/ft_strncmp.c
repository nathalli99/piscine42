/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:12:20 by natribei          #+#    #+#             */
/*   Updated: 2024/09/04 23:28:01 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((s1[index] != '\0') && (s2[index] != '\0')
		&& (index < n))
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	if (index < n)
	{
		return (s1[index] - s2[index]);
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char	str1[] = "zebra";
	char	str2[] = "mango";
	char	str3[] = "pen";
	char	str4[] = "pen";
	char	str5[] = "pencil";

	printf("return positive: %d\n", ft_strncmp(str1, str2, 1));
	printf("return negative: %d\n", ft_strncmp(str3, str5, 5));
	printf("return zero: %d\n", ft_strncmp(str3, str4, 4));
}*/
