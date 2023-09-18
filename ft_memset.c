/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:30:49 by febasma           #+#    #+#             */
/*   Updated: 2023/09/18 18:14:49 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_memset(void *str, int n, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		((char *)str)[i] = n;
		i++;
	}
}

// int main()
// {
//     char str[] = "Hello World";
//     //memset(str + 5, 120, 5);
//     ft_memset(str + 3, 120, 5);
//     printf("%s", str);
//     return (0);
// }