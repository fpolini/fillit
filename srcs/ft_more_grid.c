#include "fillit.h"

char	*ft_more_grid(char *grid, int size)//fonction qui agrandi de +1 la grille
						//aui marche pas parceaue trop petite
{
	int	i;
	int	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = NULL;
	ft_bzero((ptr = ft_strnew((size * size) + size)), (size * size) + size);
	ft_full_grid(ptr, size);
	while (grid[i])
	{
		if (grid[i] != '\n')
			ptr[j] = grid[i];
			else if (grid[i] == '\n')
			{
				ptr[j] = '.';
				j = j + 1;
				ptr[j] = grid[i];
			}
			i = i + 1;
			j = j + 1;
	}
	free(grid);
	return (ptr);
}

