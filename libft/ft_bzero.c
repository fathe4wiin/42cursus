/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:28:40 by bfathi            #+#    #+#             */
/*   Updated: 2025/09/21 18:10:34 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;
	size_t			i;

	if (!ptr || num == 0)
		return ;
	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		*p = 0;
		i++;
		p++;
	}
}
