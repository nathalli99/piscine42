/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:34:00 by lamachad          #+#    #+#             */
/*   Updated: 2024/09/04 21:25:44 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*ptr;

	ptr = dest;
	i = 0;
	while (*ptr)
	{
		ptr++;
	}
	while (*src && i < nb)
	{
		*ptr++ = src[i];
		i++;
	}
	ptr = "\0";
	return (dest);
}

#include <stdio.h>

int	main()
{
	char	dest[50] = "tartaruga";
	char	str[] = "a";
	int	n = 4;

	ft_strncat(dest, str, n);
	printf("%s\n", dest);
	return(0);
}
