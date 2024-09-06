/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:20:28 by natribei          #+#    #+#             */
/*   Updated: 2024/08/31 21:58:36 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main(void)
{
	int	array[] = {1, 2, 3, 4};
	int size = sizeof(array) / sizeof(array[0]);
	printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
	ft_rev_int_tab(array, size);
	printf ("%d %d %d %d\n",  array[0], array[1], array[2], array[3]);
	return(0);
}*/
