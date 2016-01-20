/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:56:34 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/01 19:09:35 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char*)malloc(sizeof(char) * ((len + 1)));
	if (str == NULL)
		return (NULL);
	else
	{
		while (i < len)
		{
			str[i] = s[start + i];
			i = i + 1;
		}
		str[i] = '\0';
	}
	return (str);
}
