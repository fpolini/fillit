/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:59:04 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/15 19:28:14 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	str = (char*)malloc(sizeof(*str) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i = i + 1;
		}
		str[i] = '\0';
	}
	return (str);
}
