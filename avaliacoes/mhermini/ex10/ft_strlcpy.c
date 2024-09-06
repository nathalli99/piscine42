/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:47:41 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:30:14 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

int main(void)
{
	char src1[] = "Hello, World!";
	char d1[20];
	char d2[10];
	char d3[5];
	char d4[1];

	printf("%d T-1: %s\n", ft_strlcpy(d1, src1, sizeof(d1)), d1);
	printf("%d T-2: %s\n", ft_strlcpy(d2, src1, sizeof(d2)), d2);
	printf("%d T-3: %s\n", ft_strlcpy(d3, src1, sizeof(d3)), d3);
	printf("%d T-4: %s\n", ft_strlcpy(d4, src1, sizeof(d4)), d4);

}
