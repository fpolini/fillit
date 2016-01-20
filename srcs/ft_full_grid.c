#include "fillit.h"

void	ft_full_grid(char *grid, int size)
{
	int	i;

	i = 0;
	while (i < (size * size))
	{
		grid[i] = '.';
		if (i > 0 && (i + 1) % (size + 1) == 0)
			grid[i] = '\n';
		i = i + 1;
	}
}
