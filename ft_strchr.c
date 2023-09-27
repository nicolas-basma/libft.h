/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:00:46 by febasma           #+#    #+#             */
/*   Updated: 2023/09/27 16:36:17 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// char *ft_strchr(const char *str, int c)
// {
//     while(*str != '\0')
//     {
//         if(*str == c)
//         {
//             return ((char *)str);
//         }
//         str++;
//     }
//     return (0);
// }

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
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
// 	char str[] = "Hello World";
// 	char c = 'l';
// 	char *p = ft_strchr(str, c);
// 	printf("%s", p);
// 	return (0);
// }