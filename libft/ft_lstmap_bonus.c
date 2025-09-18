/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathe4wiin <fathe4wiin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:40:45 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/18 18:57:03 by fathe4wiin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ptr;
	t_list *res;
	t_list *h_ptr;

	ptr = lst;
	h_ptr = res;
	while (ptr->next != NULL)
	{
		h_ptr = f(ptr);
		if (!h_ptr)
		{
			del(h_ptr);
			ptr = ptr->next;
		}
		else
		{
			h_ptr = h_ptr->next;
			ptr = ptr->next;
		}
	}

}