/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:16:59 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/21 15:50:36 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_(const char *str)
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
