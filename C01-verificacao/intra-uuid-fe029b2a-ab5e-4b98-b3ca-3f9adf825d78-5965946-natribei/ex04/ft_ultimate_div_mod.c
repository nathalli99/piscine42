/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:37:19 by natribei          #+#    #+#             */
/*   Updated: 2024/08/29 23:43:45 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}

/*#include <stdio.h>
int	main(void)
{
	int a = 10;
	int b = 3;

        ft_ultimate_div_mod(&a, &b);
        printf("%d \n", a);
        printf("%d", b);
}*/
