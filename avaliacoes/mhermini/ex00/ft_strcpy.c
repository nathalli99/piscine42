/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:45:47 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/21 17:45:52 by mhermini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
#include <stdio.h> */

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

/* int	main(void)
{
	char	str[50];
	char	dest[50];

	str[0] = 'M';
	str[1] = 'a';
	str[2] = 'r';
	str[3] = 'c';
	str[4] = 'i';
	str[5] = 'o';
	str[6] = ' ';
	str[7] = 'D';
	str[8] = 'a';
	str[9] = 'n';
	str[10] = 'i';
	str[11] = 'e';
	str[12] = 'l';
	str[13] = '\0';
	ft_strcpy(dest, str);
	printf("Destino: %s\n", dest);
}
 */