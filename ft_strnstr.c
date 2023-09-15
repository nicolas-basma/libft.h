/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:42:30 by febasma           #+#    #+#             */
/*   Updated: 2023/09/15 19:47:32 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *str, char c, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char str[] = "Hello World";
//     char c = 'o';
//     int n = 7;
//     printf("%s", ft_strnstr(str, c, n));
//     return (0);
// }