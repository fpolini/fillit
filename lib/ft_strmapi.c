/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:33:55 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/15 19:35:48 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		str[i] = f(i, s[i]);
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}
