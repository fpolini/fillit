#include "fillit.h"

char	*ft_verif_grid(char *teti, int nb_teti)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (teti[i] != '\0')
	{
		if (teti[i] == '.')
			k = k + 1;
		if (teti[i] == '#')
			j = ft_good_teti(teti, nb_teti, i);
		i = i + 1;
	}
	if (i != 20 || j != 4 || k != 12)
		ft_error();
	return (teti);
}
