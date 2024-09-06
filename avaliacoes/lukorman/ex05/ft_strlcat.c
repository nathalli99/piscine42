/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 05:05:49 by lukorman          #+#    #+#             */
/*   Updated: 2024/09/03 02:46:26 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 1;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	while (dlen < size && dest[dlen] != '\0')
	{
		dlen++;
	}
	if (dlen == size)
		return (dlen + ft_strlen(src));
	while (src[slen] != '\0')
	{
		slen++;
	}
	i = 0;
	while ((dlen + i + 1) < size && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

#include <stdio.h>

int    main(void)
{
    char    *src;
    char    *dest;

    src = "This is the source string.";
    dest = "This is the destination string.";
    printf("%d", ft_strlcat(dest, src, ft_strlen(dest)));
    return (0);
}
