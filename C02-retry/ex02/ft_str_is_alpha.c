/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 01:55:30 by natribei          #+#    #+#             */
/*   Updated: 2024/09/03 01:30:31 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if ((str[index] >= 65 && str[index] <= 90)
			|| (str[index] >= 97 && str[index] <= 122))
		{
			index++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int	main(void)
{
	int n;
       	n = ft_str_is_alpha("cookie");
	printf("test 1: %d\n", n);
       	n = ft_str_is_alpha("007");
	printf("test 2: %d", n);
}*/
