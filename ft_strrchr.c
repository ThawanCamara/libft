/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:38:32 by tde-souz          #+#    #+#             */
/*   Updated: 2022/05/30 23:38:32 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = 0;
	while (*s++ != 0)
		len++;
	while (len)
	{
		if (*s == c)
			return ((char *) s);
		s--;
		len--;
	}
	return (0);
}
