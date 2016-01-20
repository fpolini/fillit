#include "fillit.h"

int	ft_teti_put(char *teti, char *grid, int i, int j)
{
	int	p;
	int	tall;

	tall = ft_tall_len(grid);
	p = 0;
	if (i >= 0 && i <= 20 && j >= 0 && j <= ((tall * tall) + tall - 1) &&
		grid[j] == '.' && teti[i] >= 'a' && teti != NULL)// et si je mettais A tt de suite
	{
		teti[i] -= 32// du coup plus besoin de ca si A
		grid[j] = teti[i];
		i = i + 1;
		p += ft_teti_put(grid, teti, i + 1, j + 1);
		p += ft_teti_put(grid, teti, i + 5, j + (tall + 1));
		p += ft_teti_put(grid, teti, i - 1, j - 1);
	}
	return (p);
}
