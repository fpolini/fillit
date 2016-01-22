/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_rec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:42:49 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/22 15:42:56 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_main_rec(char **grid, char **teti, int i, int size)
{
	int		indexes[2];
	char	*grid2;

	if (teti[i] == NULL)
		return (1);
	grid2 = ft_strdup(*grid);
	indexes[0] = 0;
	indexes[1] = 0;
	while ((*grid)[indexes[0]])
	{
		while (!ft_isalpha(teti[i][indexes[1]]))
			indexes[1]++;
		if (ft_put_teti(*grid, teti[i], indexes[0], indexes[1]) != 4)
		{
			indexes[1] = 0;
			ft_reset_grid(*grid, teti[i], indexes[0]++, i);
			continue ;
		}
		if (ft_main_rec(grid, teti, i + 1, size))
			return (1);
		free(*grid);
		*grid = ft_strdup(grid2);
	}
	free(grid2);
	return (0);
}
