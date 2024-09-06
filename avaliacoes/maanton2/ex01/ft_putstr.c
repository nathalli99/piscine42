/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:50:16 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/04 22:07:34 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	count_char;

	count_char = 0;
	while (str[count_char] != '\0')
	{
		write(1, &str[count_char], 1);
		count_char++;
	}
}

void	ft_putstr(char *str);

int	main(void)
{
	char str[] = "Hello";

	ft_putstr(str);
	return (0);
}
