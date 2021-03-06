/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:09:24 by acastano          #+#    #+#             */
/*   Updated: 2021/12/02 13:16:01 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void	ft_putstr_fd(char const *s, int fd)
{
	size_t	len;

	if (!fd || !s)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
