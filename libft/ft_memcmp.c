/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:42 by addias            #+#    #+#             */
/*   Updated: 2025/10/26 17:04:51 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

// int main(int argc, char **argv)
// {
// 	if(argc == 4)
// 	{
// 		const char *s1 = argv[1];
// 		const char *s2 = argv[2];

// 		size_t n = (size_t)ft_atoi(argv[3]);

// 		printf("FT_MEMCMP: %d\n", ft_memcmp(s1, s2, n));
// 		printf("   MEMCMP: %d\n", memcmp(s1, s2, n));
// 	}

// }
