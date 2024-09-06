/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:23:12 by lukorman          #+#    #+#             */
/*   Updated: 2024/09/03 02:37:41 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

size_t    ft_strlen(char *str)
{
    size_t    i;

    i = 1;
    while (str[i] != 0)
    {
        i++;
    }
    return (i);
}

#include <stdio.h>

int    main(void)
{
    char    dest[20] = "Hello, ";
    char    *src;

    src = "humans and aliens :)";
    printf("%s", ft_strncat(dest, src, 100));
    printf("%lu", sizeof(ft_strncat(dest, src, 100)));

    return (0);
}
