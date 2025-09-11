/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathe4wiin <fathe4wiin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:42:12 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/11 19:06:53 by fathe4wiin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void			*ft_memset(void *ptr, int value, size_t num);
int				ft_isdigit(char c);
int				ft_isalpha(char c);
int				ft_isalnum(char c);
int				ft_isprint(char c);
int				ft_isascii(char c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi(char *str);
int				ft_strlen(char *str);
char			*ft_strchr(char *str, int c);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strnstr(char *str, char *to_find, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
int				ft_memcmp(void *s1, void *s2, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			ft_bzero(void *s, size_t n);

#endif