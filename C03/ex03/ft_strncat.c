/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:13:16 by natribei          #+#    #+#             */
/*   Updated: 2024/09/04 23:29:25 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	j;

	index = 0;
	j = 0;
	while (dest[index])
	{
		index++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[index] = src[j];
		j++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	destiny[20] = "super";
	char	source[] = "shy";

	ft_strncat(destiny, source, 1);
	printf("%s", destiny);
}*/
