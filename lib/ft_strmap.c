/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:49:19 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 14:00:23 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t			n;
	unsigned int	i;
	char			*str;

	i = 0;
	n = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}
