/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:05:38 by lukorman          #+#    #+#             */
/*   Updated: 2024/09/03 01:53:31 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
char	str1[] = "";
char	str2[] = "";
char	str3[] = "abc";
char	str4[] = "abc";
char	str5[] = "ABC";

printf("Comparison emptyXempty, must return 0:\n");
printf("%i\n", ft_strcmp(str1, str2));
printf("Comparison valXval, must return 0:\n");
printf("%i\n", ft_strcmp(str3, str4));
printf("Comparison emptyXval, must return diffneg:\n");
printf("%i\n", ft_strcmp(str1, str3));
printf("Comparison littlevalXbigval, must return diffneg:\n");
printf("%i\n", ft_strcmp(str5, str3));
printf("Comparison valXempty, must return diffpos:\n");
printf("%i\n", ft_strcmp(str3, str1));
printf("Comparison bigvalXlittleval, must return diffpos:\n");
printf("%i\n", ft_strcmp(str3, str5));
return (0);
}
