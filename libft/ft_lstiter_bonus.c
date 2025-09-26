/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:35:41 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/21 18:17:25 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr->next != NULL)
	{
		f(ptr);
		ptr = ptr->next;
	}
}
