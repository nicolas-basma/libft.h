/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:39:11 by febasma           #+#    #+#             */
/*   Updated: 2023/10/25 16:41:23 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;

	dest = malloc(ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, str, ft_strlen(str) + 1);
	return (dest);
}
