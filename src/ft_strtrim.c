/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:17:29 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/22 02:41:56 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chr_in_str(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

static int	len_calc(const char *s1, const char *set)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (s1[i] && chr_in_str(s1[i], set))
	{
		i++;
	}
	while (s1[i])
	{
		i++;
		len++;
	}
	i--;
	while (len > 0 && chr_in_str(s1[i], set))
	{
		i--;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	len = len_calc(s1, set);
	res = malloc(len + 1);
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] && chr_in_str(s1[i], set))
		i++;
	while (s1[i] && j < len)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}

// int main(void)
// {
// 	ft_strtrim("    ", "  ");
// }