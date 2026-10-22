/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouikan <ayouikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:16:36 by username          #+#    #+#             */
/*   Updated: 2026/10/22 11:04:01 by ayouikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l_new;
	t_list	*n_new;
	void	*cont;

	l_new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		cont = f(lst->content);
		if (!cont)
		{
			ft_lstclear(&l_new, del);
			return (NULL);
		}
		n_new = ft_lstnew(cont);
		if (!n_new)
		{
			del(cont);
			ft_lstclear(&l_new, del);
			return (NULL);
		}
		ft_lstadd_back(&l_new, n_new);
		lst = lst->next;
	}
	return (l_new);
}
