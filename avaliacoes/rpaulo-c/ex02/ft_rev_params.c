/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulo-c <rpaulo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 06:35:44 by rpaulo-c          #+#    #+#             */
/*   Updated: 2024/09/06 03:14:34 by rpaulo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	n = argc - 1;
	while (n > 0)
	{
		i = 0;
		while (argv[n][i])
		{
			ft_putchar(argv[n][i]);
			i++;
		}
		ft_putchar('\n');
		n--;
	}
	return (0);
}
