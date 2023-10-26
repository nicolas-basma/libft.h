/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:39:11 by febasma           #+#    #+#             */
/*   Updated: 2023/10/26 15:46:38 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(str);
	if (!str)
		return (NULL);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str, len + 1);
	return (dest);
}
