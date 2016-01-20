/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:30:21 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/15 19:30:00 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char		*str;
	size_t		i;

	str = (char*)malloc(sizeof(*str) * n + 1);
	if (str == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i] != '\0' && i < n)
		{
			str[i] = s1[i];
			i = i + 1;
		}
		str[i] = '\0';
	}
	return (str);
}
