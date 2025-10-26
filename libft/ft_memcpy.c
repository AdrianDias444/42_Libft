/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:38:11 by addias            #+#    #+#             */
/*   Updated: 2025/10/26 17:35:01 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		((char *)d)[i] = ((const char *)s)[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello world";
	char	dest[10];
	char	teste[10];

	// int a = 200;
	// int b = 10;
	printf("Antes: src = %s, dest = %s\n\n", src, dest);
	ft_memcpy(dest, src, 4);
	memcpy(teste, src, 4);
	printf("FT_MEMCPY: src = %s, dest = %s\n", src, dest);
	printf("   MEMCPY: src = %s, dest = %s\n", src, teste);
	return (0);
}
