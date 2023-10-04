/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:50:57 by febasma           #+#    #+#             */
/*   Updated: 2023/10/04 19:29:45 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     start;
    int     end;
    int    i;
    int     lenSet;

    if (!s1 || !set)
        return (0);
    start = 0;
    end = ft_strlen(s1);
    lenSet = ft_strlen(set);
    printf("end or = %d\n", end);
    while(ft_strchr(set, s1[start]))
        start++;
    
    i = end - lenSet;
    printf("start = %d\n", start);
    printf("i = %d\n", i);
    while(ft_strchr(set, s1[i]))
    {
        i++;
        end--;
    }

    printf("i en bucle = %d\n", i);
    printf("end = %d\n", end);
    str = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!str)
        return (0);
    str = ft_substr(s1, start, end);
    return (str);
}

