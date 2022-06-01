/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:52 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/01 15:01:06 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != 0)
	{
		write(fd, &*s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
