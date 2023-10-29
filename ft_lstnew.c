/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:33:13 by febasma           #+#    #+#             */
/*   Updated: 2023/10/29 21:00:11 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	t_list	*list;
	t_list	*new;

	list = ft_lstnew("Hello");
	new = ft_lstnew("World");
	ft_lstadd_back(&list, new);
	printf("%s\n", ft_lstlast(list)->content);
	return (0);
}
