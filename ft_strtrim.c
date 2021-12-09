/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:07:06 by acastano          #+#    #+#             */
/*   Updated: 2021/12/02 19:28:10 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_strtrim(char const *s)
{
	size_t	countB;
	size_t	countE;
	size_t	trimlen;

	if (!s)
		return (NULL);
	countB = ft_count_3whitespace_b(s);
	countE = ft_count_3whitespace_e(s);
	trimlen = ft_strlen(s) - countB - countE;
	if (countB == ft_strlen(s))
		trimlen = ft_strlen(s) - countB;
	return (ft_strsub(s, countB, trimlen));
}
