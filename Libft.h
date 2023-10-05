/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:32:18 by febasma           #+#    #+#             */
/*   Updated: 2023/10/05 16:17:12 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *str, int n);
int		ft_isalnum(char *str);
int		ft_isalpha(char *str);
int		ft_isascii(char *str);
int		ft_isdigit(char *str);
int		ft_isprint(char *str);
void	*ft_memchr(void *str, int c, int n);
void	ft_memcpy(void *dest, const void *src, int size);
void	ft_memmove(void *dest, const void *src, int size);
void	ft_memset(void *str, int n, int size);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_strlcat(char *dest, const char *src, unsigned int n);
char	*ft_strlcpy(char *dest, const char *src, unsigned int n);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, unsigned int n);
char	*ft_strnstr(const char *str, const char to_find, unsigned int n);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t nitems, size_t size);
int		ft_memcmp(const void *str1, const void *str2, unsigned int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
#endif