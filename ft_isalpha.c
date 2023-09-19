/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:54:38 by febasma           #+#    #+#             */
/*   Updated: 2023/09/19 14:08:05 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

// int main()
// {
// 	char str[] = "Hello World";
// 	int i = ft_isalpha(str);
// 	printf("%i", i);
// 	return (0);
// }