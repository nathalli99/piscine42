/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:35:03 by lukorman          #+#    #+#             */
/*   Updated: 2024/09/03 02:40:47 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0' && to_find[j] == str[i + j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
			i++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int    main(void)
{
    char    *str;
    char    *to_find;

    str = "lets try this function";
    to_find = "fun";
    printf("%s", ft_strstr(str, to_find));
    return (0);
}
