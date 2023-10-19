/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:33:13 by febasma           #+#    #+#             */
/*   Updated: 2023/10/19 20:20:12 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = (char *)s;
	while (i <= n && p[i] != '\0')
	{
		if (p[i] == c)
			return (p + i);
		i++;
		n--;
	}
	return (NULL);
}
