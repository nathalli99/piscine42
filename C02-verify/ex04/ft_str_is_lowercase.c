/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 03:18:41 by natribei          #+#    #+#             */
/*   Updated: 2024/09/03 01:00:53 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
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
	int	n;

       	n = ft_str_is_lowercase("hello");
	printf ("test 1: %d\n", n);
	n = ft_str_is_lowercase("123345");
	printf ("test 2: %d\n", n);
	n = ft_str_is_lowercase("$*12322hello");
	printf ("test 3: %d\n", n);
	n = ft_str_is_lowercase("hellO");
	printf ("test 4: %d\n", n);
}*/
