/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:54:33 by febasma           #+#    #+#             */
/*   Updated: 2023/10/30 08:33:49 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
