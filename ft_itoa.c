/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:41:39 by febasma           #+#    #+#             */
/*   Updated: 2023/11/06 23:20:22 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_special_number(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static int	ft_abs(int n)
{
	return (n * -1);
}

static int	ft_size_memory(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = ft_abs(n);
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_switch(char *s, int a, int b)
{
	char	c;

	while (a < b)
	{
		c = s[a];
		s[a++] = s[b];
		s[b--] = c;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		cpy_n;
	int		n_to_chr;
	char	*str;

	i = 0;
	cpy_n = n;
	if (n == 0 || n == -2147483648)
		return (ft_special_number(n));
	str = malloc(sizeof(char) * ft_size_memory(cpy_n) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		cpy_n = ft_abs(cpy_n);
	while (cpy_n)
	{
		n_to_chr = cpy_n % 10;
		str[i++] = 48 + n_to_chr;
		cpy_n = cpy_n / 10;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	ft_switch(str, 0, i - 1);
	return (str);
}
