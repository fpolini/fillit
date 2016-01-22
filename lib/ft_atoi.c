/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:16:37 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 18:25:13 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		j;
	char	*save;

	i = 0;
	j = 0;
	save = (char*)str;
	while (*save == ' ' || *save == '\n' || *save == '\t' ||
			*save == '\r' || *save == '\v' || *save == '\f')
		save = save + 1;
	j = (*save == '-') ? -1 : 1;
	save = (*save == '+' || *save == '-') ? save + 1 : save;
	while (*save >= '0' && *save <= '9')
	{
		i = i * 10 + *save - 48;
		save = save + 1;
	}
	return (i * j);
}
