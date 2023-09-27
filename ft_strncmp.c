/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:40:16 by febasma           #+#    #+#             */
/*   Updated: 2023/09/27 15:36:33 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_strncmp(const char *str1,const char *str2, unsigned int n)
{
	unsigned int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";
// 	unsigned int n = 3;

// 	printf("%d", ft_strncmp(str1, str2, n));
// 	return (0);
// }