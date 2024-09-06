/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:34:01 by saalves-          #+#    #+#             */
/*   Updated: 2024/09/05 05:57:06 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	if (i < nb)
	{
		dest[j + i] = '\0';
	}
	return (dest);
}

int	main(void)
{
	char	c[20] = "Samir";
	char	s[] = "saalves-";

	printf("%s", ft_strncat(c, s, 4));
	return (0);
}
