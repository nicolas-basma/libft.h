/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:42:30 by febasma           #+#    #+#             */
/*   Updated: 2023/10/25 16:05:19 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	i = 0;
	cpy = (char *)str;
	if (ft_strlen(to_find) == 0)
		return (cpy);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0' && i + j < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
