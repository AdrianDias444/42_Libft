#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int i = 0;
    int signalCounter = 0;
    int signalNegative = 0;
    int numero = 0;

    while (nptr[i] == ' ' || (nptr[i] >= 7 && nptr[i] <= 13))
        i++;

    while (nptr[i] == '+' || nptr[i] == '-')
    {
        signalCounter++;
        if(signalCounter > 1)
            return (0);
        if(nptr[i] == '-')
            signalNegative = 1;
        i++;
    }

    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        numero = numero * 10 + (nptr[i] - '0');
        i++;
    }
    if (signalNegative == 1)
        numero = numero * -1;
    return (numero);
}

/*
int main(void)
{
    char *str = "\n\v\f       -2178832ass1313";
    printf("%d\n%d", atoi(str), ft_atoi(str));

}
*/
