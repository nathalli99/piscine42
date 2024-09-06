/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myatoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:48:56 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/08/24 15:51:57 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	myatoi(char *str)
{
	int result = 0;
	int	sign = 1;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
		printf("%c", *str);
	}

	if (*str == '-')
	{
		sign = -1;
		str++;
		printf("%c", *str);
	}
	else if (*str == '+')
	{
		str++;
		printf("%c", *str);
	}

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 * (*str - '0');
		str++;
	}

	//printf("%d", sign * result);
	return sign * result;
}