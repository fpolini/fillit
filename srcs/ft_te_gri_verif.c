#include "fillit.h"

int	ft_te_gri_verif(char *teti, int teti_nb)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (teti[i] != '\0')
	{
		if (teti[i] == '.')
			k++;
		if (teti[i] == '#')
			j = ft_good_teti(teti, teti_nb, i);
		i++;
	}
	if (i != 20 || j != 4 || k != 12)
		ft_error();
	return (1);
}

