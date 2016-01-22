/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:32:39 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/08 13:04:22 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char		*pointeur;
	size_t			i;
	size_t			t;

	pointeur = &s1[0];
	t = ft_strlen(s2);
	i = 0;
	if (s1[0] == '\0' && s1[0] == s2[0])
		return ((char*)pointeur);
	while (s1[i] != '\0' && i < n && (n - i >= t))
	{
		if (ft_strncmp(pointeur, s2, t) == 0)
			return ((char*)pointeur);
		else
		{
			i = i + 1;
			pointeur = &s1[i];
		}
	}
	return (NULL);
}
