/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_good_teti.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:41:12 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/22 15:42:05 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_good_teti(char *teti, char teti_nb, int i)
{
	int	coin;

	coin = 0;
	if (teti[i] == '#' && i >= 0 && i <= 20 && coin <= 4)
	{
		coin++;
		teti[i] = teti_nb + 'a';
		coin += ft_good_teti(teti, teti_nb, i + 1);
		coin += ft_good_teti(teti, teti_nb, i - 1);
		coin += ft_good_teti(teti, teti_nb, i + 5);
		coin += ft_good_teti(teti, teti_nb, i - 5);
	}
	return (coin);
}
