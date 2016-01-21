#include "fillit.h"

void	ft_reset_grid(char *grid, char *teti, int i, int j)
{
	while (grid[i])
	{
		if (grid[i] == ('A' + j))
			grid[i] = '.';
		i++;
	}
	i = 0;
	while (teti[i])
	{
		if (teti[i] == ('A' + j))
			teti[i] += 32;
		i++;
	}
}
