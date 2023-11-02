/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:54:58 by febasma           #+#    #+#             */
/*   Updated: 2023/10/31 14:46:40 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new;
	void	*content;

	if (!list || !f || !del)
		return (NULL);
	new_list = NULL;
	while (list)
	{
		content = (*f)(list->content);
		new = ft_lstnew(content);
		if (!new)
		{
			(*del)(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		list = list->next;
	}
	return (new_list);
}
