#include "fillit.h"

char	*ft_teti_verif(char *teti, int teti_nb)
{
	if (ft_te_gri_verif(teti, teti_nb) == 1)
		return (teti);
	ft_error();
	return (NULL);
}
