/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_teti_verif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:46:38 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/22 15:46:40 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_teti_verif(char *teti, int teti_nb)
{
	if (ft_te_gri_verif(teti, teti_nb) == 1)
		return (teti);
	ft_error();
	return (NULL);
}
