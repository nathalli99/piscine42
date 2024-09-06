/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicializadorTabuleiro.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:26:26 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/08/24 14:55:52 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	myatoi(char *str);

void inicializarTabuleiro(int **tabuleiro, char *argv[], int index, int i, int j)
{
	int size;

	size = 6;
	if(i >= size) return;
	if(j >= size) 
	{
		inicializarTabuleiro(tabuleiro, argv, index, i + 1, 0);
		return;
	}
	if (index < size * size + 1)
	{
		tabuleiro[i][j] = myatoi(argv[index]);
	}
}
