/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:41:39 by febasma           #+#    #+#             */
/*   Updated: 2023/10/25 21:00:51 by febasma          ###   ########.fr       */
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

void	ft_switch(char *s, int a, int b)
{
	while (a < b)
		ft_swap(&s[a++], &s[b--]);
}

char	*ft_special(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

int	absolut(int n)
{
	int	sign;

	sign = -1;
	return (n * sign);
}
int	memory(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = absolut(n);
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = n;
	if (n == 0 || n == -2147483648)
		return (ft_special(n));
	if (n < 0)
		k = absolut(k);
	str = malloc(sizeof(char) * memory(n) + 1);
	if (!str)
		return (NULL);
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
