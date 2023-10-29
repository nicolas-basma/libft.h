/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:53:02 by febasma           #+#    #+#             */
/*   Updated: 2023/10/29 20:45:34 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last;
	t_list	*before;

	last = ft_lstnew(new->content);
	if (list == NULL)
		return ;
	before = *list;
	while (before->next != NULL)
		before = before->next;
	before->next = last;
}
