/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/10/09 12:05:00 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char count_size(char const *s, char c)
{
    int i;
    int j;
    int k;
    char **str;
    int len;

    len = ft_strlen(s);
    str = (char **)malloc(sizeof(char *) * len);

    i = 0;
    j = 0;
    k = 0;
    while(i < len)
    {
        while(i < len)
        {
            if(*s != c)
            {
                str[j][k] = *s;
                k++;
                s++;
            }
            i++;
        if (*s == c)
        {
            j++;
            k = 0;
            s++;
        }
        i++;
    }
    str[j][k] = '\0';
    }

    return (0);
}

char **ft_split(char const *s, char c)
{
    char **str;
    int i;

    count_size(s, c);
    //printf("%s\n", str[0]);
    return (0);
}