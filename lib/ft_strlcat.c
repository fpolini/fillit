/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:15:33 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/23 16:56:49 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (n < i)
		return (n + j);
	while (*dst != '\0' && n--)
		dst++;
	while (n-- > 1 && *src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (i + j);
}
