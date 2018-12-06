/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:03:16 by nde-jesu          #+#    #+#             */
/*   Updated: 2018/11/15 09:11:48 by nde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_if(t_list *lst, void (*f)(t_list *elem), void *data,
		int (*cmp)(void*, void*))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		if (cmp(lst->content, data) == 0)
			f(lst);
		lst = lst->next;
	}
}
