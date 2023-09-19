/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:30:11 by febasma           #+#    #+#             */
/*   Updated: 2023/09/19 14:19:57 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);

	while (str[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
// 	char str[] = "Hello World";
// 	int i = ft_strlen(str);
// 	printf("%i", i);
// 	return (0);
// }