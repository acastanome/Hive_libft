/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:48:56 by acastano          #+#    #+#             */
/*   Updated: 2021/11/15 21:59:03 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (len > ft_strlen(b))
		ft_putstr("len bigger than length of string b: overflow");
		return (b);
//	if (c >= 0 && c <= 255)
//	{
		while (i < len)
		{
			((unsigned char *)b)[i] = (unsigned char)c;
			i++;
		}
//	}
	return (b);
}
