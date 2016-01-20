#include "fillit.h"

int	ft_teti_put(char *grid, char *teti, int j, int i)
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
		p = p + 1;
		p += ft_teti_put(grid, teti, j + 1, i + 1);
		p += ft_teti_put(grid, teti, j + (tall + 1), i + 5);
		p += ft_teti_put(grid, teti, j - 1, i - 1);
	}
	return (p);
}
