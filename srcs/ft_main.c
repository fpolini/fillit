/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:42:35 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/22 15:42:38 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_main(char **teti, int teti_nb)
{
	char	*grid;
	int		size;

	size = ft_carre_min(teti_nb + 1);
	grid = ft_strnew((size * size) + size);
	ft_put_grid(grid, size);
	while (!ft_main_rec(&grid, teti, 0, size))
	{
		grid = ft_grid_plus(grid, ++size);
	}
	ft_aff_grid(grid);
	free(grid);
}
