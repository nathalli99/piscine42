/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:25:28 by natribei          #+#    #+#             */
/*   Updated: 2024/08/29 23:40:45 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int     main(void)
{
        int a = 10;
        int b = 3;
        int d;
        int m;

	ft_div_mod(a, b, &d, &m);

        printf("div:%d\n", d);
        printf("mod:%d", m);
}*/
