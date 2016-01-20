/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:32:38 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 13:47:43 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	if (alst != NULL)
	{
		while (*alst)
		{
			ptr = NULL;
			if ((*alst)->next != NULL)
				ptr = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = ptr;
		}
		*alst = NULL;
	}
}
