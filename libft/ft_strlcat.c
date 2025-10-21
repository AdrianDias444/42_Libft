#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}




size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len_src;
    size_t j;

    len_src = ft_strlen(src);
    j = ft_strlen(dst);
    i = 0;
    while (src[i] && i + j < size - 1)
    {
        dst[j + i] = src[i];
        i++;
    }
    dst[j + i] = '\0';
    return (len_src + j);
}
