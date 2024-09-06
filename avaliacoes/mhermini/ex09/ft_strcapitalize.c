/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:41:25 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/26 00:18:23 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	is_first_word;

	index = 0;
	is_first_word = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z') && is_first_word)
		{
			str[index] -= 32;
			is_first_word = 0;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z' && !is_first_word)
			str[index] += 32;
		else if (!(str[index] >= 'a' && str[index] <= 'z')
			&& !(str[index] >= 'A' && str[index] <= 'Z')
			&& !(str[index] >= '0' && str[index] <= '9'))
			is_first_word = 1;
		else
			is_first_word = 0;
		index++;
	}
	return (str);
}


int main(void)
{
    char test1[] = "hello world";
    char test2[] = "HELLO WORLD";

    printf("T-1: %s Should be: Hello World\n", ft_strcapitalize(test1));
    printf("T-2: %s Should be: Hello World\n", ft_strcapitalize(test2));
}
