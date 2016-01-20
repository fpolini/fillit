/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:07:51 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 16:10:38 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*first;

	new = NULL;
	first = NULL;
	while (lst != NULL)
	{
		if (first == NULL)
		{
			new = f(lst);
			first = new;
		}
		else
		{
			first->next = f(lst);
			first = first->next;
		}
		lst = lst->next;
	}
	return (new);
}
