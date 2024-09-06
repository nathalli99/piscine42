/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:58:07 by natribei          #+#    #+#             */
/*   Updated: 2024/08/26 20:32:31 by natribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ex(char *dest, char *str, int n)
{
	int x;

	x = 0;
	/*while(x != '\0')
	{
		
	}*/


}

int	main(void)
{
	char *dest = "abcde";
	char str[6] = "pizza";
	int n = 6;
	ex(dest, str, n);
	write(1, &str[1], 1);
	write(1, &str[2], 1);
	write(1, &str[4], 1);
	write(1, &str[3], 1);
}
