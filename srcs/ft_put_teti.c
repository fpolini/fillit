/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_teti.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:43:32 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/22 15:43:52 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_put_teti(char *grid, char *teti, int j, int i)
{
	int		pater;
	int		size;

	size = ft_tall(grid);
	pater = 0;
	if (i >= 0 && i <= 20 && j >= 0 && j <= ((size * size) + size - 1) &&
			grid[j] == '.' && teti[i] >= 'a' && teti != NULL)
	{
		teti[i] -= 32;
		grid[j] = teti[i];
		pater++;
		pater += ft_put_teti(grid, teti, j + 1, i + 1);
		pater += ft_put_teti(grid, teti, j + (size + 1), i + 5);
		pater += ft_put_teti(grid, teti, j - 1, i - 1);
	}
	return (pater);
}
