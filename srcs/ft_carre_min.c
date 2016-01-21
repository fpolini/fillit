#include "fillit.h"

int	ft_carre_min(int teti_nb)
{
	int		tall;

	tall = 2;
	while ((teti_nb * 4) > (tall * tall))
		tall++;
	return (tall);
}

