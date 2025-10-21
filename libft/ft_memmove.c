#include "libft.h"

void ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    const char* buff = src;

    i = 0;
    while (i < n)
    {
        ((char *)dest)[i] = buff[i];
        i++;
    }
}

int main(void)
{
    int a = 4;
    int b = 2;


    printf("O valor inicial de dest: %d\n", b);
    ft_memmove(&b, &a, sizeof(int));
    printf("O valor atual de dest: %d\n", b);
}
