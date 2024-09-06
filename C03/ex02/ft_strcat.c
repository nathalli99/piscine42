/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:12:55 by natribei          #+#    #+#             */
/*   Updated: 2024/09/04 23:29:21 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	j;

	index = 0;
	j = 0;
	while (dest[index])
	{
		index++;
	}
	while (src[j] != '\0')
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
	char	destiny[] = "water";
	char	source[] = "melon";

	ft_strcat(destiny, source);
	printf("%s", destiny);
}*/
