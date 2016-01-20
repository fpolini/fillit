/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:28:59 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 16:04:13 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		j;
	size_t		i;
	char		*str;

	j = (int)ft_strlen(s);
	i = 0;
	if (s == NULL)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i = i + 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > i)
		j = j - 1;
	str = ft_strsub(s, i, (j - i + 1));
	return (str);
}
