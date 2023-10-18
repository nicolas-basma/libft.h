/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:30:49 by febasma           #+#    #+#             */
/*   Updated: 2023/10/18 16:04:59 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t size)
{
	char *p;
	p = (char *)s;
	while(size > 0)
	{
		((char *)s)[size - 1] = c;
		s++;
	}
}

int main()
{
	char str[] = "hello";
	ft_memset(str, 'a', 3);
	printf("%s", str);
	return (0);
}
