/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:12:27 by acastano          #+#    #+#             */
/*   Updated: 2021/12/02 13:16:33 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
void	ft_putendl_fd(char const *s, int fd)
{
	if (!fd || !s)
		return ;
	ft_putstr_fd(s, fd);
	write (fd, "\n", 1);
}
