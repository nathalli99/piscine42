/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:58:50 by natribei          #+#    #+#             */
/*   Updated: 2024/08/18 22:33:46 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			if ((column == 0 && line == 0) || (column == x - 1 && line == 0)
				|| (column == 0 && line == y - 1)
				|| (column == x - 1 && line == y - 1))
				ft_putchar('o');
			else if (line == 0 || line == y - 1)
				ft_putchar('-');
			else if (column == 0 || column == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
