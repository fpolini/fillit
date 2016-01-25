/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:48:32 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/25 16:55:07 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	file1(char **tetiss, char *in_file, int j)
{
	tetiss[j + 1] = NULL;
	free(in_file);
	ft_main(tetiss, j);
	ft_freetab(tetiss);
}

static char	*file2(char **tetiss, char *in_file, int j, int i)
{
	if (in_file[i] == '\0')
	{
		if (ft_strlen(in_file) == 20)
			tetiss[j] =
				ft_strdup(ft_teti_verif(ft_strsub(in_file, i - 21, 19), j));
		else
			tetiss[j] =
				ft_strdup(ft_teti_verif(ft_strsub(in_file, i - 20, 19), j));
	}
	return (tetiss[j]);
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
	tetiss[j] = file2(tetiss, in_file, j, i);
	file1(tetiss, in_file, j);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		fillit(argv[1]);
	else
		ft_error();
	return (0);
}
