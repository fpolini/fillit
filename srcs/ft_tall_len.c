#include "fillit.h"

int	ft_tall_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i = i + 1;
	return (i);
}
