/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 01:09:13 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/15 03:02:46 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'z';
	while (alfabeto >= 'a')
	{
		write (1, &alfabeto, 1);
		alfabeto--;
	}
}
