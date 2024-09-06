/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:55:13 by asilveir          #+#    #+#             */
/*   Updated: 2024/08/25 21:53:06 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
int     main()
{
        char a[] = "test";
	char b[] = "ESSE É O B";

        ft_strcpy(a, b);
        printf("%s\n", a);
        printf("%s\n", b);
        return (0);
}
