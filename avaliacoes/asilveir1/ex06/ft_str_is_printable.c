/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:25:59 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/25 15:42:39 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		if (*str == '\0')
		{
			return (1);
		}
		str++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_printable("d"));
	return (0);
}*/
