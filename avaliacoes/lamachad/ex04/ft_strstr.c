/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:33:00 by lamachad          #+#    #+#             */
/*   Updated: 2024/09/04 21:28:35 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)

{
	char	*x;
	char	*y;

	if (!*to_find)
		return ((char *)(str));
	if (!str)
		return (0);
	while (*str)
	{
		x = str;
		y = to_find;
		while (*x && *y && (*x == *y))
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return ((char *)(str));
		str++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char	text[] = "um elfo no vale encantado";
	char	*result;

	result = ft_strstr(text, "elfo");
	printf("%s\n", result);
	return(0);
}
