#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>



int main()
{
       size_t tmp = ft_strlcat(NULL, "abc", 0);

       printf("%ld\n", tmp);
}        
