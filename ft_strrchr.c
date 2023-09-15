/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:32:56 by febasma           #+#    #+#             */
/*   Updated: 2023/09/15 19:38:17 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			j = i;
		}
		i++;
	}
	if (str[j] == c)
	{
		return ((char *)str + j);
	}
	return (0);
}

// int main()
// {
//     char str[] = "Hello World";
//     char c = 'l';
//     printf("%s", ft_strrchr(str, c));
//     return (0);
// }
