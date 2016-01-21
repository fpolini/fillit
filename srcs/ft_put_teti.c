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

