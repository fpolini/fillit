/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:17:43 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 18:40:26 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numb(int n, int base)
{
	int		i;
	int		j;

	i = 0;
	j = n / base;
	while (j != 0)
	{
		j = j / base;
		i++;
	}
	return (i);
}

static int	ft_int_base(int n, int base)
{
	int	t;

	t = 0;
	t = n % base;
	if (t >= 10)
		t = t + 7;
	return (t);
}

char		*ft_itoa_base(int n, int base)
{
	char	*str;
	int		i;

	i = numb(n, base);
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
		str[i] = ft_int_base(n, base) + 48;
		n = n / base;
		i = i - 1;
	}
	return (str);
}
