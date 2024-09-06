/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-s <marcos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:40:54 by marcos-s          #+#    #+#             */
/*   Updated: 2024/09/03 19:59:53 by marcos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 63 && str[i] < 91))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int res = ft_str_is_uppercase("abc");
	int res1 = ft_str_is_uppercase("ABC");
	int res2 = ft_str_is_uppercase("");
	printf("%d, %d, %d", res, res1, res2);
	return(0);
}*/