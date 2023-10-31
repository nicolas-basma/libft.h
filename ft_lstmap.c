/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:54:58 by febasma           #+#    #+#             */
/*   Updated: 2023/10/31 11:23:35 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!list || !f || !del)
		return (NULL);
	new = NULL;
	while (list)
	{
		temp = ft_lstnew((*f)(list->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		list = list->next;
	}
	return (new);
}
