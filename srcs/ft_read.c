/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:44:03 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/22 15:44:50 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *file)
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
	close(fd);
	return (buff);
}
