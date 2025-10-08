/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathe4wiin <fathe4wiin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:25:02 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/10/08 21:05:38 by fathe4wiin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chr_in_str(char c, const char *str)
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

int	len_calc(const char *s1, const char *set)
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

void	ft_strcpyy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
	{
		res = malloc(ft_strlen(s1) + 1);
		ft_strcpyy(res, s1);
		return (res);
	}
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