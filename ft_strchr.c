/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:00:46 by febasma           #+#    #+#             */
/*   Updated: 2023/09/15 19:29:21 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int i = 0;

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