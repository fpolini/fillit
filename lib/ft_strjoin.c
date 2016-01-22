/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:32:41 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/01 18:56:23 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	int		p;
	char	*str;

	i = 0;
	n = ft_strlen(s1);
	p = ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * ((n + p + 1)));
	if (str == NULL)
		return (NULL);
	else
	{
		while (i < (n + p))
		{
			if (i < n)
				str[i] = s1[i];
			if (i >= n)
				str[i] = s2[i - n];
			i = i + 1;
		}
		str[i] = '\0';
	}
	return (str);
}
