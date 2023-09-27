/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:37 by febasma           #+#    #+#             */
/*   Updated: 2023/09/27 16:30:03 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 127))
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
// 	int i = ft_isascii(str);
// 	printf("%i", i);
// 	return (0);
// }