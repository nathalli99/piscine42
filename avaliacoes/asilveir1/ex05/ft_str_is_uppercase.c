/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:30:44 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/25 15:25:25 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
/*
int	main()
{
	printf("%d", ft_str_is_uppercase("AAA"));
	return (0);
}*/
