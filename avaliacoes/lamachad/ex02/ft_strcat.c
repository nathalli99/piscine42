/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:22:13 by lamachad          #+#    #+#             */
/*   Updated: 2024/09/04 21:24:15 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src++;
	}
	ptr = "\0";
	return (dest);
}

#include <stdio.h>

int	main()
{
	char	dest[50] = "boneca";
	char	src[] = "vila";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	 return (0);
}
