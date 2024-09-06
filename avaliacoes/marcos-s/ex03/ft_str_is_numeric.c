/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-s <marcos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:35:48 by marcos-s          #+#    #+#             */
/*   Updated: 2024/09/03 19:21:22 by marcos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int res = ft_str_is_numeric("5");
	int res2 = ft_str_is_numeric("abc");
	int res3 = ft_str_is_numeric("");
	printf("%d, %d, %d", res, res2, res3);
	return(0);
}*/