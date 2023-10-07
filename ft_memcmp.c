/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:20:06 by febasma           #+#    #+#             */
/*   Updated: 2023/10/07 18:12:14 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1_cpy;
	unsigned char	*str2_cpy;

	i = 0;
	str1_cpy = (unsigned char *)str1;
	str2_cpy = (unsigned char *)str2;
	while (i < n)
	{
		if (str1_cpy[i] != str2_cpy[i])
			return (str1_cpy[i] - str2_cpy[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    unsigned int n = 3;

    printf("%d", ft_memcmp(str1, str2, n));
    return (0);
}*/
