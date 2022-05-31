/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 07:40:57 by tde-souz          #+#    #+#             */
/*   Updated: 2022/05/31 10:47:50 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
/* {
	size_t	i;
	size_t	nlen;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	nlen = ft_strlen(needle);
	while (len)
	{
		//printf("%zu\n", len);
		while (*(needle + i) == *(haystack + i) && len + 0 >= nlen)
		{
			if (++i == nlen)
				return ((char *)haystack);
		}
		haystack += i;
		len -= i;
		i = 0;
		haystack++;
		len--;
	}
	return (0);
} */
{
	const char	*t_haystack;
	const char	*t_needle;
	size_t	t_len;
	
	if (*needle == 0)
		return ((char *) haystack);
	if (len == 0)
		return (0);
	while (*haystack && len)
	{
		t_haystack = haystack;
		t_needle = needle;
		t_len = len;
		while (*t_needle && *t_haystack && *t_needle++ == *t_haystack++ && t_len--)
		{
			if (*t_needle == 0)
				return ((char *) haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}