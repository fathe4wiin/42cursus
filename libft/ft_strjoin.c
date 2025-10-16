/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:16:09 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/10/16 12:31:19 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		len;

	len = ft_strlen_(s1) + ft_strlen_(s2);
	res = malloc(len + 1);
	if (!res)
		return (0);
	len = 0;
	i = 0;
	while (s1 && s1[i])
	{
		res[len++] = s1[i++];
	}
	i = 0;
	while (s2 && s2[i])
	{
		res[len++] = s2[i++];
	}
	res[len] = '\0';
	return (res);
}

// int main(void)
// {
// 	char *res = ft_strjoin(NULL, "simple stuff");
// }
