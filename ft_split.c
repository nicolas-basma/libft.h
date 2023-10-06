/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/10/06 19:28:51 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_word_len(char const *s, char c)
{
    int i;
    int j;
    int k;
    char *dest;

    i = 0;
    j = 0;

    while(*s != c)
    {
        i++;
        s++;
    }
    //printf("%i\n", i);
    //printf("%i\n", j);
    //k = i / j;
    ft_strlcpy(dest, s, i);
    
    return(dest);
}

char	**ft_split(char const *s, char c)
{
    char *i;

    i = ft_word_len(s,c);

    printf("%s", i);
  
    return (0);
}