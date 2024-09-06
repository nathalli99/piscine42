/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-s <marcos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:27:28 by marcos-s          #+#    #+#             */
/*   Updated: 2024/09/05 22:18:03 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'A' && str[p] <= 'Z')
			p++;
		else if (str[p] >= 'a' && str[p] <= 'z')
			p++;
		else
			return (0);
	}
	return (1);
}
#include<stdio.h>
int	main(void)
{
	char s1[] = "cadete";
	char s2[] = "ab3lha";
	char s3[] = "";
	int r = ft_str_is_alpha(s1);

	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d\n", ft_str_is_alpha(s2));
	printf("%d\n", ft_str_is_alpha(s3));
	printf("%d\n", r);
}
