/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:38:56 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:06:33 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str[count] <= 126))
		{
			return (0);
		}
	count ++;
	}
	return (1);
}

int	main(void)
{
	char	*test5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*test6 = "abcdefghijklmnopqrstuvwxyz";

	printf("T-1: %d Should be: 1\n", ft_str_is_printable("Hello, World!"));
	printf("T-2: %d Should be: 1\n", ft_str_is_printable("1234567890"));
	printf("T-3: %d Should be: 1\n", ft_str_is_printable(""));
	printf("T-4: %d Should be: 0\n", ft_str_is_printable("Hello\nWorld"));
	printf("T-5: %d Should be: 1\n", ft_str_is_printable(test5));
	printf("T-6: %d Should be: 1\n", ft_str_is_printable(test6));
	printf("T-7: %d Should be: 0\n", ft_str_is_printable("Hello\tWorld"));
	printf("T-8: %d Should be: 1\n", ft_str_is_printable("!@#$%^&*()_+"));
	printf("T-9: %d Should be: 0\n", ft_str_is_printable("\x7F"));
	printf("T-10: %d Should be: 1\n", ft_str_is_printable("Hello World"));
}
