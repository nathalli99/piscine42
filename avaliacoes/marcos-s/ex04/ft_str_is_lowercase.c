/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-s <marcos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:25:01 by marcos-s          #+#    #+#             */
/*   Updated: 2024/09/04 22:21:05 by marcos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int res = ft_str_is_lowercase("abc");
	int res1 = ft_str_is_lowercase("ABC");
	int res2 = ft_str_is_lowercase("");
	printf("%d, %d, %d", res, res1, res2);
	return(0);
}*/