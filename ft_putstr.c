/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:07:49 by acastano          #+#    #+#             */
/*   Updated: 2021/12/02 13:17:56 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void	ft_putstr(char const *s)
{
	size_t	len;

	if (!s)
		return ;
	len = ft_strlen(s);
	write(1, s, len);
}
