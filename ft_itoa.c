/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:41:39 by febasma           #+#    #+#             */
/*   Updated: 2023/10/17 19:04:33 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_switch(char *s, int a, int b)
{
	while (a < b)
	{
		ft_swap(&s[a++], &s[b--]);
	}
	return (s);
}

char	*ft_special(int n)
{
	char	*z;
	char	*top;

	z = (char *)malloc(sizeof(char) * 12);
	if (!z)
		return (NULL);
	top = (char *)malloc(sizeof(char) * 12);
	if (!top)
		return (NULL);
	top = "-2147483648";
	z[0] = '0';
	if (n == 0)
		return (z);
	if (n == -2147483648)
		return (top);
	return (NULL);
}

int	absolut(int n)
{
	int	sign;

	sign = -1;
	return (n * sign);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = n;
	str = (char *)malloc(sizeof(char) * 10);
	if (!str)
		return (NULL);
	if (n == 0 || n == -2147483648)
		return (ft_special(n));
	if (n < 0)
		k = absolut(k);
	while (k)
	{
		j = k % 10;
		str[i++] = 48 + j;
		k = k / 10;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	ft_switch(str, 0, i - 1);
	return (str);
}
