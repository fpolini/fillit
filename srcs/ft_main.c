#include "fillit.h"

void	ft_main(char **teti, int nb_teti)
{
	char	*grid;
	int	size;

	size = ft_carre_min(int nb_teti);
	grid = ft_strnew((size * size) + size);
	ft_full_grid(grid, size);
	while (!ft_main_reset(&grid, teti, 0, size))
	{
		grid = ft_more_grid(grid, ++size);
	}
	ft_aff_grid(grid);
	free(grid);
}

