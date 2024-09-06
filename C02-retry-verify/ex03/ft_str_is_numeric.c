/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 02:55:17 by natribei          #+#    #+#             */
/*   Updated: 2024/09/03 00:59:02 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 48 && str[index] <= 57)
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

       	n = ft_str_is_numeric("1234567890");
	printf ("test 1: %d\n", n);
       	n = ft_str_is_numeric("123abc90");
	printf ("test 2: %d\n", n);
       	n = ft_str_is_numeric("Ab99");
	printf ("test 3: %d\n", n);
}*/
