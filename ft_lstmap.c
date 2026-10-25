/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouikan <ayouikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:16:36 by username          #+#    #+#             */
/*   Updated: 2026/10/25 13:19:15 by ayouikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l_new;
	t_list	*n;
	void	*cont;

	l_new = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		cont = f(lst->content);
		n = ft_lstnew(cont);
		if (!n)
		{
			del(cont);
			ft_lstclear(&l_new, del);
			return (NULL);
		}
		ft_lstadd_back(&l_new, n);
		lst = lst->next;
	}
	return (l_new);
}
