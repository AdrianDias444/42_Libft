/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:24:44 by addias            #+#    #+#             */
/*   Updated: 2025/10/30 16:08:17 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i = 0;
	int negative = 0;
	int signalCounter = 0;
	int res = 0;

	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negative = 1;
		signalCounter++;
		if (signalCounter > 1)
			return (0);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	if (negative == 1)
		res = res * -1;
	return (res);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "\007 8";
// 	printf("   ATOI: %d \nFT_ATOI: %d", atoi(str), ft_atoi(str));
// }
