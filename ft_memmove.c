/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:47 by febasma           #+#    #+#             */
/*   Updated: 2023/09/18 18:53:07 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    ft_memmove(void *dest, const void *src, int size)
{
    int i = 0;

    while (i < size)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
}


/*int main()
{
    char str[] = "Hello World";
    char str2[] = "Jola Malaga";
    ft_memmove(str, str2, 3);
    printf("%s", str);
    return (0);
}*/