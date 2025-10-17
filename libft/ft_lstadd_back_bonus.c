/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:08:46 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/10/16 22:35:40 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	node = *lst;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = new;
	new->next = NULL;
}

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;