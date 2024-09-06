/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:15:07 by natribei          #+#    #+#             */
/*   Updated: 2024/09/04 02:03:48 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
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

        n = ft_str_is_printable("\n \t \b");
        printf ("test 1: %d\n", n);
        n = ft_str_is_printable("apple");
        printf ("test 2: %d\n", n);
}*/
