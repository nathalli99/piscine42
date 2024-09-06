/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:30:34 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/04 22:05:45 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	r;
	char	str[] = "Hello, World!";

	r = ft_strlen(str);
	printf("%i\n", r);
	return(0);
}
