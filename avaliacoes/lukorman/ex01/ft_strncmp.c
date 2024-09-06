/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:44:27 by lukorman          #+#    #+#             */
/*   Updated: 2024/09/03 02:06:17 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int    main(void)
{
    char    str1[] = "";
    char    str2[] = "";
    char    str3[] = "abcDe";
    char    str4[] = "abc";
    char    str5[] = "abC";
    
    int ft_strncmp(char *s1, char *s2, unsigned int n);
    printf("Comparison emptyXempty, must return 0:\n");
    printf("%i\n", ft_strncmp(str1, str2, 3));
    printf("Comparison valXval, must return 0:\n");
    printf("%i\n", ft_strncmp(str3, str4, 2));
    printf("Comparison emptyXval, must return diffneg:\n");
    printf("%i\n", ft_strncmp(str1, str3, 3));
    printf("Comparison littlevalXbigval, must return diffneg:\n");
    printf("%i\n", ft_strncmp(str5, str3, 3));
    printf("Comparison valXempty, must return diffpos:\n");
    printf("%i\n", ft_strncmp(str3, str1, 2));
    printf("Comparison bigvalXlittleval, must return diffpos:\n");
    printf("%i\n", ft_strncmp(str3, str4, 5));
    return (0);
}
