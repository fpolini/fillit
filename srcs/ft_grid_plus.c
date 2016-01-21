#include "fillit.h"

char		*ft_grid_plus(char *grid, int size)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str = NULL;
	str = ft_strnew((size * size) + size);
	ft_put_grid(str, size);
	while (grid[i])
	{
		if (grid[i] != '\n')
			str[j] = grid[i];
		else if (grid[i] == '\n')
		{
			str[j] = '.';
			j++;
			str[j] = grid[i];
		}
		i++;
		j++;
	}
	free(grid);
	return (str);
}

