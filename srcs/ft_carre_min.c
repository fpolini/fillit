#include "fillit.h"

int	ft_carre_min(int nb_teti)
{
	int	tall_side;

	tall_side = 2;
	while ((nb_teti * 4) > (tall_side * tall_side))
		tall_side = tall_side + 1;
	return (tall_side);
}
