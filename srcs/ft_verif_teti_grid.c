#include "fillit.h"

static int	ft_verif_grid(char *teti, int nb_teti)
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
	return (1);
}

static int	ft_good_teti(char *teti, char nb_teti, int i)
{
	int coin;

	coin = 0;
	if (i <= 20 && coin <= 4 && teti[i] == '#' && i >= 0)
	{
		coin = coin + 1;
		teti[i] = nb_teti + 'A';
		coin += ft_good_teti(teti, nb_teti, i + 1);
		coin += ft_good_teti(teti, nb_teti, i - 1);
		coin += ft_good_teti(teti, nb_test, i + 5);
		coin += ft_goog_teti(teti, nb_teti, i - 5);
	}
	return (coin);
}

char	*ft_verif_teti_grid(char *teti, int nb_teti)
{
	int i;

	i = 0;
	if (ft_verif_grid(teti, nb_teti) == 1)
		return (teti);
	ft_error();
	return (NULL);
}	
