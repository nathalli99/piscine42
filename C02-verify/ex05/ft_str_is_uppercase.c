/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 04:24:51 by natribei          #+#    #+#             */
/*   Updated: 2024/09/03 01:35:39 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
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
/*int     main(void)
{
		int     n;
        n = ft_str_is_uppercase("HELLO");
        printf ("test 1: %d\n", n);
        n = ft_str_is_uppercase("123345");
        printf ("test 2: %d\n", n);
        n = ft_str_is_uppercase("$*12322hello");
		printf ("test 3: %d\n", n);
		n = ft_str_is_uppercase("hellO");
		printf ("test 4: %d\n", n);
}*/
