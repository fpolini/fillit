#include "fillit.h"

void	fillit(char *file)
{
	char	*in_file;;
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
			tetiss[j] = ft_strdup(ft_teti_verif(ft_strsub(in_file, i - 21, 20), j));
			j++;
		}
	}
	if (in_file[i] == '\0')
		tetiss[j] = ft_strdup(ft_teti_verif(ft_strsub(in_file, i - 21, 20), j));
	tetiss[j + 1] = NULL;
	free(in_file);
	ft_main(tetiss, j);
	ft_freetab(tetiss);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		fillit(argv[1]);
	else
		ft_error();
	return (0);
}
