/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:59:41 by febasma           #+#    #+#             */
/*   Updated: 2023/09/19 14:09:58 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
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
// 	int i = ft_isprint(str);
// 	printf("%i", i);
// 	return (0);
// }