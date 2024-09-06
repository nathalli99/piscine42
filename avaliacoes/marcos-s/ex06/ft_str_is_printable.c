/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-s <marcos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:59:43 by marcos-s          #+#    #+#             */
/*   Updated: 2024/09/03 20:09:22 by marcos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int res = ft_str_is_printable("abc");
	int res1 = ft_str_is_printable("ABC\n");
	int res2 = ft_str_is_printable("");
	printf("%d, %d, %d", res, res1, res2);
	return(0);
}*/