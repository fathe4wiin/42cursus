#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	a[10] = "abcdefghi";
	char	b1[10] = "abcdefghi";
	char	b2[10];
	char	c1[10];
	char	d1[20] = "hi ";
	char	e1[10] = "abcdefghi";

	/* ft_memset */
	printf("memset: %s\n", (char *)ft_memset(a, 'x', 3));
	/* ft_isdigit */
	printf("isdigit 0: %d\n", ft_isdigit('0'));
	printf("isdigit 9: %d\n", ft_isdigit('9'));
	printf("isdigit a: %d\n", ft_isdigit('a'));
	/* ft_isalpha */
	printf("isalpha A: %d\n", ft_isalpha('A'));
	printf("isalpha z: %d\n", ft_isalpha('z'));
	printf("isalpha 5: %d\n", ft_isalpha('5'));
	/* ft_isalnum */
	printf("isalnum A: %d\n", ft_isalnum('A'));
	printf("isalnum 3: %d\n", ft_isalnum('3'));
	printf("isalnum !: %d\n", ft_isalnum('!'));
	/* ft_isprint */
	printf("isprint space: %d\n", ft_isprint(' '));
	printf("isprint ~: %d\n", ft_isprint('~'));
	printf("isprint 7: %d\n", ft_isprint(7));
	/* ft_isascii */
	printf("isascii A: %d\n", ft_isascii('A'));
	printf("isascii 200: %d\n", ft_isascii(200));
	/* ft_toupper */
	printf("toupper a: %c\n", ft_toupper('a'));
	printf("toupper Z: %c\n", ft_toupper('Z'));
	/* ft_tolower */
	printf("tolower A: %c\n", ft_tolower('A'));
	printf("tolower z: %c\n", ft_tolower('z'));
	/* ft_atoi */
	printf("atoi 42: %d\n", ft_atoi("42"));
	printf("atoi -42: %d\n", ft_atoi("   -42"));
	printf("atoi +123abc: %d\n", ft_atoi("+123abc"));
	printf("atoi empty: %d\n", ft_atoi(""));
	/* ft_strlen */
	printf("strlen hello: %zu\n", ft_strlen("hello"));
	printf("strlen empty: %zu\n", ft_strlen(""));
	/* ft_strchr */
	printf("strchr hello l: %s\n", ft_strchr("hello", 'l'));
	printf("strchr hello z: %s\n", ft_strchr("hello", 'z'));
	printf("strchr hello \\0: %s\n", ft_strchr("hello", '\0'));
	/* ft_strncmp */
	printf("strncmp abc abd 2: %d\n", ft_strncmp("abc", "abd", 2));
	printf("strncmp abc abd 3: %d\n", ft_strncmp("abc", "abd", 3));
	printf("strncmp abc abc 5: %d\n", ft_strncmp("abc", "abc", 5));
	/* ft_strnstr */
	printf("strnstr hello world in hello world 11: %s\n",
		ft_strnstr("hello world", "world", 11));
	printf("strnstr hello world in hello 5: %s\n", ft_strnstr("hello", "world",
			5));
	printf("strnstr abc in abc 3: %s\n", ft_strnstr("abc", "", 3));
	/* ft_memcpy */
	printf("memcpy: %s\n", (char *)ft_memcpy(b2, b1, 5));
	/* ft_memcmp */
	printf("memcmp abc abd 3: %d\n", ft_memcmp("abc", "abd", 3));
	printf("memcmp abc abc 3: %d\n", ft_memcmp("abc", "abc", 3));
	/* ft_memchr */
	printf("memchr abc l: %s\n", (char *)ft_memchr("abc", 'b', 3));
	printf("memchr abc z: %s\n", (char *)ft_memchr("abc", 'z', 3));
	/* ft_strlcpy */
	printf("strlcpy ret: %zu dst: %s\n", ft_strlcpy(c1, "hello", sizeof(c1)),
		c1);
	/* ft_strlcat */
	printf("strlcat ret: %zu dst: %s\n", ft_strlcat(d1, "there", sizeof(d1)),
		d1);
	/* ft_bzero */
	ft_bzero(e1, 5);
	printf("bzero: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", (unsigned char)e1[i]);
	printf("\n");
	return (0);
}
