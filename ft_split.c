/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/10/07 17:57:36 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_word_len(char const *s, char c)
{
    int i;
    char *copy;

    i = 0;
    while(*s != c)
    {
        i++;
        s++;
    }
    copy = ft_strlcpy(copy, s, i);
    return(*copy);
}

char	**ft_split(char const *s, char c)
{
    char **str;
    char i;

    i = ft_word_len(s,c);

    printf("%c", i);
  
    return (0);
}