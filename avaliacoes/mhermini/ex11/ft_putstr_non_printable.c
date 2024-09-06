/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:11 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:35:11 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex_digits;

	i = 0;
	hex_digits = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			write(1, &hex_digits[(unsigned char)str[i] / 16], 1);
			write(1, &hex_digits[(unsigned char)str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	write(1, "Test 1: Empty string\n", 21);
	ft_putstr_non_printable("");
	write(1, "\n", 1);
	write(1, "Test 2: No non-printable chars\n", 31);
	ft_putstr_non_printable("Hello, World!");
	write(1, "\n", 1);
	write(1, "Test 3: Single non-printable char\n", 34);
	ft_putstr_non_printable("Hello\nWorld");
	write(1, "\n", 1);
	write(1, "Test 4: Multiple non-printable chars\n", 37);
	ft_putstr_non_printable("Oi\nvoce\testa\rbem?");
	write(1, "\n", 1);
	write(1, "Test 5: All non-printable chars\n", 32);
	ft_putstr_non_printable("\n\t\r");
	write(1, "\n", 1);
	return (0);
}

