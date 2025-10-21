#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    if(!dest && !src)
        return(NULL);

    i = 0;
    while(i < n)
    {
        ((char *)dest)[i] = ((const char*)src)[i];
        i++;
    }
    return(dest);
}

/*
int main(void)
{

    int a = 4;
    int b = 2;

    printf("O valor inicial de b: %d\n", b);
    ft_memcpy(&b, &a, sizeof(int));
    printf("O valor atual de b: %d\n", b);
}
*/
