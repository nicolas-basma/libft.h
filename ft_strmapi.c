/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:10:11 by febasma           #+#    #+#             */
/*   Updated: 2023/10/25 16:52:51 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *result;

    i = 0;
    result = ft_strdup(s);
    while(result[i])
    {
        result[i] = (*f)(i, result[i]);
        i++;
    }
    return (result);
}

int main(void)
{
    char    *str = "hello";
    char    *result;

    result = ft_strmapi(str, &ft_toupper);
    printf("%s\n", result);
    return (0);
}