/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:49:44 by tde-souz          #+#    #+#             */
/*   Updated: 2022/05/31 19:49:44 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* static int	setnbr(int num, const char *s, size_t i)
{
	if (num >= 10)
		i = setnbr(num / 10, s, i++);
	*(char *) (s + i) = num % 10 + '0';
	return (i);
} */


/* char	*ft_itoa(int n)
{
	size_t	num;
	size_t	negative;

	negative = 0;
	if (n > 0)
		num = (size_t) n;
	else
	{
		num = (size_t) n * -1;
		negative = 1;
	}
	ret = (char *)malloc(( + 1) * sizeof(char));
	if (ret == 0)
		return (0);
	return (ret);
} */