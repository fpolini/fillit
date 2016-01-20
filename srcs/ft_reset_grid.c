#include "fillit.h"

void	ft_reset_grid(char *teti, char *grid, int i, int j)
{
	while (grid[i])
	{
		if (grid[i] == ('A' + j))
			grid[i] = '.';
		i = i + 1;
	}
	i = 0;
	while (teti[i]) // si on laisse tt en majuscule pas besoin de ca
	{
		if (teti[i] == ('A' + j))
			teti[i] = teti + 32;
		i = i + 1;
	}
}
	
