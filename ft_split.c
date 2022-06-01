/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:27:36 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/01 09:29:13 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	
	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static char	*get_next_word(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*(s + len) && *(s + len) != c)
		len++;	
	return(ft_substr(s, 0, len));
}

char **ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;

	i = 0;
	ret = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (ret == 0)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			*(ret + i) = get_next_word(s, c);
			s += ft_strlen(*(ret + i));
			i++;
		}
		if (*s)
			s++;
	}
	*(ret + i) = 0;
	return (ret);
}

/* static size_t	count_string(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != 0)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s != 0)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*get_next_string(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	return (ft_substr(s, 0, i));
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	ret = malloc((count_string(s, c) + 1) * sizeof(char *));
	if (ret == 0)
		return (0);
	while (*s != 0)
	{
		if (*s == c)
			s++;
		else
		{
			ret[i++] = ft_strdup(get_next_string(s, c));
			while (*s != 0 && *s != c)
				s++;
		}
	}
	ret[i] = 0;
	return (ret);
} */