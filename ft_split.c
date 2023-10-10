/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/10/10 18:50:15 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_words(char const *s, char c)
{
	int	i;
	int	old_i;
	int	len;
	int	count;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (i < len)
		{
			if (ft_strchr(&c, s[i]) == NULL)
				break ;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (ft_strchr(&c, s[i]) != NULL)
				break ;
			i++;
		}
		if (i > old_i)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int 	words;
	int		index;
	int		len;
	char	temp[123456];
	char	**str;

	i = 0;
	j = 0;
	index = 0;
	words = number_words(s, c);
	len = ft_strlen(s);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		while (i < len)
		{
			if (ft_strchr(&c, s[i]) == NULL)
				break ;
			i++;
		}
		printf("i = %d\n", i);
		while (i < len)
		{
			if (ft_strchr(&c, s[i]) != NULL)
				break ;
			temp[j] = s[i];
			j++;
			i++;
		}
		if (j > 0)
		{
			temp[j] = '\0';
			str[index] = ft_strdup(temp);
			index++;
			j = 0;
		}
	}
	return (str);
}