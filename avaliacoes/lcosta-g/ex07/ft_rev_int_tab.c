/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:13:19 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/08/19 10:57:44 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;
	int	i;

	count = 0;
	i = size - 1;
	while (count < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[count];
		tab[count] = temp;
		count++;
		i--;
	}
}
