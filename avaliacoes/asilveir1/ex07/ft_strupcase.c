/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:53:27 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/25 16:34:28 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			*str = *str - 32;
		}
		str++;
	}
	str = start;
	return (str);
}
/*int	main()
{
	char s[] = "abacAxI";
	printf("%s", ft_strupcase(s));
	return (0);
}*/
