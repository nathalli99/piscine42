/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:10:48 by natribei          #+#    #+#             */
/*   Updated: 2024/08/31 21:39:10 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>
int	main(void)
{
	int	s = 42;
	int	w = 44;

	printf("before: s = %d w = %d\n", s, w);
	ft_swap(&s, &w);
	printf("after: s = %d w = %d\n", s, w);
}*/
