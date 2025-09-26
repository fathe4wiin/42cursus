/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:34:46 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/21 18:19:21 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newNode;

	newNode = malloc(sizeof(t_list));
	if (!newNode)
		return (NULL);
	newNode->content = content;
	newNode->next = NULL;
	return (newNode);
}
