/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:49:58 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/08/24 16:08:15 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void inicializarTabuleiro(int **tabuleiro, char *argv[], int index, int i, int j);

int main(int argc, char *argv[])
{
	int tamanho = 6;
	int **tabuleiro;
	int row;
	int col;
	int i = 0;
	row = 0;
	col = 0;

	tabuleiro = (int **)malloc(tamanho * sizeof(int *));
	if (tabuleiro == NULL)
	{
		return 1;
	}

	while (i <= tamanho)
	{
		tabuleiro[i] = (int *)malloc(tamanho * sizeof(int));
		if (tabuleiro[i] == NULL)
		{
			while (i > 0)
			{
				free(tabuleiro[--i]);
			}
			free(tabuleiro);

			return 1;
		}
		i++;
	}

	inicializarTabuleiro(tabuleiro, argv, 1, 0, 0);

	//exibirTabuleiro(tabuleiro, 0, 0);

	/*
	while (row < tamanho)
	{
		while (col < tamanho)
		{
			write(1, tabuleiro[][], 2); 
			col++;
		}
		row++;
	}
	*/
	for (int row = 0; row < tamanho; row++)
	{
		for (int col = 0; col < tamanho; col++)
		{
			printf("%2d", tabuleiro[row][col]);
		}
		printf("\n");
	}

	for (int row = 0; row < tamanho; row++)
	{
		free(tabuleiro[row]);
	}
	free(tabuleiro);
	
	return 0;
}
