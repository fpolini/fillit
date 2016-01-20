#include "fillit.h"

int	ft_main_reset(char **grid, char **teti, int i, int size)
{
	int	k;
	int	j;
	char	grid_tmp;

	if (teti[i] == NULL)
		return (1);
		grid_tmp = ft_strdup(*grid);
		k = 0;
		j = 0;
		while ((*grid)[k])
		{
			while (!ft_isalpha(teti[i][j]))
				j = j + 1;
			if (ft_teti_put(*grid, teti[i], k, j) != 4)
			{
				j = 0;
				ft_reset_grid(*grid, teti[i], k++, i);
				continue ;
			}
			if (ft_main_reset(grid, teti, i + 1, size))
				return (1);
			free(*grid);
			*grid = ft_strdup(grid_tmp);
		}
		free(grid_tmp);
		return (0);
}
