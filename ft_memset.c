/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:30:49 by febasma           #+#    #+#             */
/*   Updated: 2023/10/17 19:35:48 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *str, int n, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i <= size)
	{
		((char *)str)[i] = n;
		i++;
	}
}
