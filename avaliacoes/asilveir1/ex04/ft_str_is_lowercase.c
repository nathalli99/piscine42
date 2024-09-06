/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:50:58 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/24 23:17:37 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	printf("%d", ft_str_is_lowercase("aaaaaaAa"));
	return (0);
}*/
