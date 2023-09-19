/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:59:36 by febasma           #+#    #+#             */
/*   Updated: 2023/09/12 16:59:56 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_isdigit(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
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
// 	int i = ft_isdigit(str);
// 	printf("%i", i);
// 	return (0);
// }