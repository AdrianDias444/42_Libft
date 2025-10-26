/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:24:44 by addias            #+#    #+#             */
/*   Updated: 2025/10/26 17:04:51 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	signal;
	int		res;
	int		neg;

	neg = 1;
	signal = 0;
	res = 0;
	while (*nptr == ' ' || (*nptr >= '\a' && *nptr <= '\r'))
		nptr++;
	while (*nptr == '+' || *nptr == '-')
	{
		signal++;
		if (signal > 1)
			return (0);
		if (*nptr == '-')
			neg = -neg;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (res * neg);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "\t+-4562a 67  ";
// 	printf("   ATOI: %d \nFT_ATOI: %d", atoi(str), ft_atoi(str));
// }
