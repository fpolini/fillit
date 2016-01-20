/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:56 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 18:29:53 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numb(int n)
{
	int	i;
	int	j;

	i = 0;
	j = n / 10;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = numb(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		i = i + 1;
	str = ft_strnew(i + 1);
	if (!str)
		return (NULL);
	str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (i >= 0 && n != 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i = i - 1;
	}
	return (str);
}
