/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:30:32 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/23 13:35:17 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_do(void *s1, size_t n, char *ss1, const char *ss2)
{
	while (n-- > 0)
	{
		*ss1 = *ss2;
		ss1 = ss1 + 1;
		ss2 = ss2 + 1;
	}
	return (s1);
}

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	char			*ss1;
	const char		*ss2;

	ss1 = (char*)s1;
	ss2 = (const char*)s2;
	if ((ss1 <= ss2) || ((ss1 + n) <= ss2))
		s1 = ft_do(s1, n, ss1, ss2);
	else
	{
		ss1 = ss1 + n - 1;
		ss2 = ss2 + n - 1;
		while (n-- > 0)
		{
			*ss1 = *ss2;
			ss1 = ss1 - 1;
			ss2 = ss2 - 1;
		}
	}
	return (s1);
}
