/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:34 by addias            #+#    #+#             */
/*   Updated: 2025/10/26 17:04:51 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*ptr;
	size_t			i;

	a = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == a)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
// int	main(int argc, char **argv)
// {
// 	size_t	n;
// 	int		i;

// 	if(argc == 4)
// 	{
// 		const void *s = argv[1];
// 		i = ft_atoi(argv[2]);
// 		n = (size_t)ft_atoi(argv[3]);
// 		printf("FT_MEMCHR: %s\n", (char *)ft_memchr(s, i, n));
// 		printf("   MEMCHR: %s", (char *)ft_memchr(s, i, n));
// 	}
// }
