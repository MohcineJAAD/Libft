/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-30 15:16:53 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-30 15:16:53 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_previus(t_list **base_address, void *content, \
void (*del)(void *))
{
	del(content);
	ft_lstclear(base_address, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*list;
	t_list	*current;
	void	*content;

	list = NULL;
	current = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
			return (ft_free_previus(&list, content, del));
		if (!list)
			list = node;
		else
			current->next = node;
		current = node;
		lst = lst->next;
	}
	return (list);
}
