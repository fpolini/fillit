/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:48:32 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/22 16:44:08 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	verif_file(char *in_file)
{
	int		k;

	k = 0;
	while (in_file[++k] != '\0')
	{
		if (in_file[k] != '.' && in_file[k] != '\n' && in_file[k] != '#')
			ft_error();
	}
}

void		fillit(char *file)
{
	char	*in_file;
	char	**tetiss;
	int		i;
	int		j;

	i = 20;
	j = 0;
	in_file = ft_read(file);
	verif_file(in_file);
	tetiss = (char **)malloc(sizeof(char*) * 27);
	while (in_file[++i] != '\0')
	{
		if (i % 21 == 0)
		{
			tetiss[j] =
				ft_strdup(ft_teti_verif(ft_strsub(in_file, i - 21, 19), j));
			j++;
		}
	}
	if (in_file[i] == '\0')
		tetiss[j] =
			ft_strdup(ft_teti_verif(ft_strsub(in_file, i - 20, 19), j));
	tetiss[j + 1] = NULL;
	free(in_file);
	ft_main(tetiss, j);
	ft_freetab(tetiss);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		fillit(argv[1]);
	else
		ft_error();
	return (0);
}
