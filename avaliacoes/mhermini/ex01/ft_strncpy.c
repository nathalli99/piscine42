/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:45:17 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/25 23:46:02 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char			*ptr;
	unsigned int	count;

	ptr = dest;
	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (ptr);
}

int main(void)
{
	char dest[20];

	ft_strncpy(dest, "Hello", 10);
	printf("Test 1: \"%s\"\n", dest);// Should be: "Hello"

	ft_strncpy(dest, "Hello, World!", 5);
	printf("Test 2: \"%s\"\n", dest);// Should be: "Hello"

	ft_strncpy(dest, "Hello, World!", 15);
	printf("Test 3: \"%s\"\n", dest);// Should be: "Hello, World!"

	ft_strncpy(dest, "", 5);
	printf("Test 4: \"%s\"\n", dest);// Should: ""

	ft_strncpy(dest, "Hello, World!", 0);
	printf("Test 5: \"%s\"\n", dest);  //Should be: ""
}
