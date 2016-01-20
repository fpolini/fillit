/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 13:17:02 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/13 15:39:53 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <libft.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 546


void	fillit(char *file);
void	ft_error(void);
char	*ft_read(char *file);
void	ft_aff_grid(char *grid);
int	ft_carre_min(int nb_teti);
void	ft_full_grid(char *grid, int size);
void	ft_main(char **teti, int nb_teti);
void	ft_main_reset(char **grid, char **teti, int i, int size);
char	*ft_more_grid(char *grid, int size);
void	ft_reset_grid(char *teti, char *grid, int i, int j);
int	ft_tall_len(char *str);
int	ft_teti_put(char *grid, char *teti, int j, int i);
char	*ft_verif_grid(char *teti, int nb_teti);
int	ft_good_teti(char *teti, char nb_teti, int i);
#endif
