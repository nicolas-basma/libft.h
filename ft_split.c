/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/10/11 19:11:39 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number_of_words(char const *s, char c)
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

void	ft_word_len(char const *s, size_t *start, size_t *end, char c)
{
	*start = *end;
	while (s[*start] == c)
		*start += 1;
	*end = *start;
	while (s[*end] != c && s[*end] != '\0')
		*end += 1;
}

char	**ft_split(char const *s, char c)
{
	int 	i;
	size_t	start;
	size_t	end;
	int		words;
	char	**str;

	i = 0;
	start = 0;
	end = 0;
	words = ft_number_of_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (str == NULL)
		return (NULL);
	while(i < words)
	{
		ft_word_len(s, &start, &end, c);
		str[i] = ft_substr(s, start, end - start - 1);
		i++;
	}
	return (str);
}