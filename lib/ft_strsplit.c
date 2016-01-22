/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:32:28 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 16:06:29 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_word(const char *s, char c)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			if (s[i] != c)
			{
				nb = nb + 1;
				while (s[i] != c && s[i])
					i = i + 1;
			}
			i = i + 1;
		}
		return (nb + 1);
	}
	return (0);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ptr;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char*) * ft_n_word(s, c));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		i = j;
		while (s[i] && j < ft_strlen(s) && s[j] != c)
			j = j + 1;
		ptr = ft_strsub(s, i, j - i);
		if (ptr != NULL && (j - i) > 0)
			tab[k++] = ptr;
		i = i + 1;
		j = j + 1;
	}
	tab[k] = 0;
	return (tab);
}
