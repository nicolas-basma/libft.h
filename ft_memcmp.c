/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:20:06 by febasma           #+#    #+#             */
/*   Updated: 2023/10/19 19:40:46 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	i = 0;
	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_cpy[i] != s2_cpy[i])
			return (s1_cpy[i] - s2_cpy[i]);
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
