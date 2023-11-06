/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:54:58 by febasma           #+#    #+#             */
/*   Updated: 2023/11/03 19:20:16 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_list;
	t_list	*new;
	void	*value;

	if (!list || !f || !del)
		return (NULL);
	new_list = NULL;
	tmp = list;
	while (tmp)
	{
		value = (*f)(tmp->content);
		new = ft_lstnew(value);
		if (!new)
		{
			(*del)(value);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		tmp = tmp->next;
	}
	return (new_list);
}
