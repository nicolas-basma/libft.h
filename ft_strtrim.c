/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:50:57 by febasma           #+#    #+#             */
/*   Updated: 2023/10/02 16:35:25 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;

	if (!s1 || !set)
		return (NULL);

    while(s1[i] && ft_strchr(set, s1[i]))
        i++;

    while(j > i && ft_strchr(set, s1[j]))
        j--;

    str = (char *)malloc(sizeof(char) * (j - i + 2));
    if (!str)
        return (NULL);

    str = ft_substr(s1, i, j - i + 1);
    return (str);
}

