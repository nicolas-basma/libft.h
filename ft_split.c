/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/10/09 16:22:23 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cmp(char c, char d)
{
	if (c == d)
		return (1);
	else
		return (0);
}
int quantity(char const *s, char c)
{
    int i;
    int q;

    i = 0;
    q = 0;
    while (*s)
    {
        if(cmp(s[i], c))
            q++;
        s++;
    }
    return (q);
    
}

int	word_size(char const *s, char c)
{
	int		i;
	int		j;
    int len_word;

	i = 0;
	j = 0;
	while (*s)
	{
		if (!cmp(s[i], c))
			j++;
        else
            break;
        len_word = j;
        s++;
	}
	return (len_word);
}

char	**ft_split(char const *s, char c)
{
	char **str;
    char *cpy;
	int i;
    int j;
    int len_word;
    int quant;

    i = 0;
    j = 0;
    quant = quantity(s,c);
    while(i <= quant)
    {
    }
	return (0);
}