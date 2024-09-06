/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:37:19 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/25 16:47:56 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			*str = *str + 32;
		}
		str++;
	}
	str = start;
	return (str);
}

/*int	main()
{
	char s[] = "ABaCAxI";
	ft_strlowcase(s);
	printf("%s", s);
	return (0);
}*/
