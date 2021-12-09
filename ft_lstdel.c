/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:29:29 by acastano          #+#    #+#             */
/*   Updated: 2021/12/09 17:57:11 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next != NULL)
	{
		ft_lstdel(&((*alst)->next), del);
	}
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
