/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:57 by addias            #+#    #+#             */
/*   Updated: 2025/10/26 17:04:51 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return ((void *)d);
}

// int	main(int argc, char **argv)
// {
// 	if(argc == 2)
// 	{
// 		char	*src = argv[1];
// 		char	dest[30];
// 		char	test[30];
// 		ft_memmove(dest, src, ft_strlen(src) + 1);
// 		memmove(test, src, ft_strlen(src) + 1);
// 		printf("   MEMMOVE: %s", test);
// 		printf("\nFT_MEMMOVE: %s", dest);
// 		// char*str = "abc";
// 		// printf("%p", str);
// 	}
// }
