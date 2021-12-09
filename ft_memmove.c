/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:58:39 by acastano          #+#    #+#             */
/*   Updated: 2021/11/29 18:20:15 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else if (!dst && !src && len > 0)
		return (dst);
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((const char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}
