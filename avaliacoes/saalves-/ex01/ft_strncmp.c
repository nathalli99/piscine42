/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <natribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:04:27 by saalves-          #+#    #+#             */
/*   Updated: 2024/09/05 05:53:53 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			s2++;
			s1++;
			i++;
		}
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "Samir";
	char	s2[] = "saalves-";

	printf("%d.\n", ft_strncmp(s1, s2, 2));
	return (0);
}
