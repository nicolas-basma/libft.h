/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:17:34 by febasma           #+#    #+#             */
/*   Updated: 2023/09/27 16:30:48 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_memcpy(void *dest, const void *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
}

/*int main()
{
    char str[] = "Hello World";
    char str2[] = "Hello Malaga";
    //memcpy(str, str2, 9); 
    ft_memcpy(str, str2, 9);
    printf("%s", str);
    return (0);
}*/