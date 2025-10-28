/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:25:47 by addias            #+#    #+#             */
/*   Updated: 2025/10/28 17:58:14 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t len;
	long nb = n;
	char *str;
	size_t i;

	len = 1;
	while(nb > 9)
	{
		nb = nb/10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));

	i = len - 1;
	while(i > 0)
	{
		str[i] = (n%10) + '0';
		i--;
	}
	str[len] = '\0';
	return(str);
}

int main()
{

	printf("%s", ft_itoa(111));
	printf("\n");
}
