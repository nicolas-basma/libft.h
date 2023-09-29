/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:50:57 by febasma           #+#    #+#             */
/*   Updated: 2023/09/29 17:56:41 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    char           *str;

    i = 0;
    j = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!s1 || !set)
        return (NULL);
    while(s1[i])
    {
        if(s1[i] == set[j])
        {
            str[i] = 'a';
            i++;
        }
        str[i] = s1[i];
        i++;
    }
    return (str);
    
}

