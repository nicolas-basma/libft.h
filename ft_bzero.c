/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:31:06 by febasma           #+#    #+#             */
/*   Updated: 2023/09/27 15:32:54 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	ft_bzero(void *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}

// int main()
// {
//     char str[] = "Hello World";
//     ft_bzero(str, 6);
//     printf("%s", str);
//     return (0);
// }