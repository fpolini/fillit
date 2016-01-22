/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:06:35 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/15 19:32:21 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char*)src;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = ptr[i];
		i = i + 1;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i = i + 1;
	}
	return (dst);
}
