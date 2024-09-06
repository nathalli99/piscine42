/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:51:27 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/21 23:12:44 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	divisao;
	int	resto_divisao;

	divisao = a / b;
	resto_divisao = a % b;
	*div = divisao;
	*mod = resto_divisao;
}

int	main()
{
	int	div;
	int	mod;
	ft_div_mod(14, 6, &div, &mod);
	printf("Divisao: %d", div);
	printf("\nModulo:%d", mod);
	return (0);
}
