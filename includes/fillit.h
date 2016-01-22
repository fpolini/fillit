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

# define BUFF_SIZE 546


void		ft_aff_grid(char *grid);
char		*ft_read(char *file);
void		ft_error(void);
void		fillit(char *file);
char		*ft_teti_verif(char *teti, int teti_nb);
int		ft_te_gri_verif(char *teti, int teti_nb);
int		ft_tall(char *str);
void		ft_reset_grid(char *grid, char *teti, int i, int j);
int		ft_put_teti(char *grid, char *teti, int j, int i);
void		ft_put_grid(char *grid, int size);
int		ft_main_rec(char **grid, char **teti, int i, int size);
void		ft_main(char **teti, int teti_nb);
char		*ft_grid_plus(char *grid, int size);
int		ft_good_teti(char *teti, char teti_nb, int i);
int		ft_carre_min(int teti_nb);
#endif
