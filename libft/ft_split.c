/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:16:25 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/21 15:50:38 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**free_all(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (0);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (words);
}

static char	*extract_words(const char *str, int *i, char c)
{
	int		j;
	int		word_len;
	char	*res;

	word_len = 0;
	while (str[*i + word_len] && str[*i + word_len] != c)
		word_len++;
	res = malloc(word_len + 1);
	if (!res)
		return (0);
	j = 0;
	while (str[*i] && str[*i] != c)
		res[j++] = str[(*i)++];
	res[j] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			res[j] = extract_words(s, &i, c);
			if (!res[j])
				return (free_all(res, j - 1));
			j++;
		}
	}
	res[j] = 0;
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int main(void)
// {
// 	ft_split("hello", '\0');
// }

// int main(void)
// {
//     char *s;
//     char delimiter;
//     char **result;
//     int i;

//     // Test 1
//     s = "Hello World from 42";
//     delimiter = ' ';
//     result = ft_split(s, delimiter);
//     printf("Original: \"%s\"\n", s);
//     printf("Split results:\n");
//     for (i = 0; result[i]; i++)
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         free(result[i]);
//     }
//     free(result);
//     printf("\n");

//     // Test 2
//     s = ",one,,two,three,";
//     delimiter = ',';
//     result = ft_split(s, delimiter);
//     printf("Original: \"%s\"\n", s);
//     printf("Split results:\n");
//     for (i = 0; result[i]; i++)
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         free(result[i]);
//     }
//     free(result);
//     printf("\n");

//     // Test 3
//     s = "no_delimiters_here";
//     delimiter = ',';
//     result = ft_split(s, delimiter);
//     printf("Original: \"%s\"\n", s);
//     printf("Split results:\n");
//     for (i = 0; result[i]; i++)
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         free(result[i]);
//     }
//     free(result);

//     return (0);
// }
