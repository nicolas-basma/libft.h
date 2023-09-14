/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:25:34 by febasma           #+#    #+#             */
/*   Updated: 2023/09/14 18:43:50 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int len)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '/0')
		i++;
	while (src[j] != '/0' && j < len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '/0';
	return (dest);
}