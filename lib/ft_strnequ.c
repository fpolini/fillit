/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:30:17 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/15 16:28:46 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i = i + 1;
	if ((unsigned char)s1[i] - (unsigned char)s2[i] == 0)
		return (1);
	else
		return (0);
}
