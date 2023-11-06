/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:29 by febasma           #+#    #+#             */
/*   Updated: 2023/11/05 20:45:54 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number_of_words(char const *s, char c)
{
	unsigned int	count;
	unsigned int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		s++;
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

void	ft_free(char **str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	size_t			start;
	size_t			end;
	unsigned int	words;
	char			**str;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	end = 0;
	words = ft_number_of_words(s, c);
	str = (char **)malloc(sizeof(*str) * (words + 1));
	if (!str)
		return (NULL);
	while (i < words)
	{
		ft_word_len(s, &start, &end, c);
		str[i] = ft_substr(s, start, end - start);
		if (!str[i])
			ft_free(str);
		i++;
	}
	str[i] = NULL;
	return (str);
}
