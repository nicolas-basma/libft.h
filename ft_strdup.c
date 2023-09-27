/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:39:11 by febasma           #+#    #+#             */
/*   Updated: 2023/09/27 16:36:47 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;

	dest = malloc(ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, str, ft_strlen(str) + 1);
	return (dest);
}

/*int main()
{
    char str[] = "Hello World";
    //char *dest = ft_strdup(src);
    char *dest = strdup(str);
    printf("%s", dest);
    return (0);
}*/