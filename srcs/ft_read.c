/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:44:03 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/25 16:03:22 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	verif_file(char *in_file)
{
	int		k;
	int		i;

	k = 0;
	i = 20;
	if (in_file[0] != '.' && in_file[0] != '#' && in_file[0] != '\0')
		ft_error();
	while (in_file[k] != '\0')
	{
		if (in_file[k] != '.' && in_file[k] != '\n' && in_file[k] != '#')
			ft_error();
		if (in_file[k] == '\n' &&
				in_file[k + 1] == '\n' && in_file[k + 2] == '\n')
			ft_error();
		k = k + 1;
	}
	while (in_file[++i] != '\0')
	{
		if (i % 21 == 0)
		{
			if (in_file[i - 1] != '\n')
				ft_error();
		}
	}
}

char		*ft_read(char *file)
{
	int		fd;
	char	*buff;

	if ((fd = open(file, O_RDONLY)) < 0)
		ft_error();
	buff = ft_strnew(BUFF_SIZE);
	if (read(fd, buff, BUFF_SIZE) < 0)
		ft_error();
	if (ft_strlen(buff) < 20 || buff[BUFF_SIZE - 1] != '\0')
		ft_error();
	if (buff[ft_strlen(buff) - 1] == '\n' && (buff[ft_strlen(buff) - 2] != '.'
				&& buff[ft_strlen(buff) - 2] != '#'))
		ft_error();
	verif_file(buff);
	close(fd);
	return (buff);
}
