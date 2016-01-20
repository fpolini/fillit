/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 13:23:43 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/13 15:30:47 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(char *file)
{
	char	*in_file;
	char	**tetiss;

	in_file = ft_read(file);
	tetiss = (char **)malloc(sizeof(char*) * 27);
	while (in_file[++i] != '\0')
	{
		if (i % 21 == 0)
		{
			tetiss[j] = ft_strdup(ft_verif_grid(ft_strsub(in_file, i - 21, 20), j));
			j = j + 1;
		}
	}
	if (in_file[i] == '\0')
		tetiss[j] = ft_strdup(ft_verif_grid(ft_strsub(in_file, i - 21, 20), j));
	tetiss[j + 1] = NULL;
	free(in_file);
	ft_main(tetiss, j);
	ft_freetab(tetiss);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fillit(argv[1]);
	else
		ft_error();
	return (0);
}
