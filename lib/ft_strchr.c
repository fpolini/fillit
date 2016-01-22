/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:15:42 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/09 13:58:56 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*pointeur;
	char		k;
	int			i;

	pointeur = NULL;
	i = 0;
	k = (char)c;
	while (s[i] != k && s[i] != '\0')
		i = i + 1;
	if (s[i] == '\0' && c != 0)
		return ((char*)pointeur);
	else
	{
		pointeur = &s[i];
		return ((char*)pointeur);
	}
}
